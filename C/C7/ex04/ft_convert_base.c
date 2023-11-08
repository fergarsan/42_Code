/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 06:26:45 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/27 18:59:18 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_putnbr_v2(int nbr, char *str, char *nbrf);
int		length_nbr(int nbr, char *base, int length);

int	checkerror(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
			|| str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
	i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str [i] >= 9 && str [i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] != '\0') && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count = count * (-1);
		i++;
	}	
	*ptr_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	count;
	int	nb;
	int	nb2;
	int	base_length;

	nb = 0;
	i = 0;
	base_length = checkerror(base);
	if (base_length >= 2)
	{
		count = whitespaces(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (base_length * nb) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= count);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*finalnbr;
	int		mednbr;
	int		length_nbrf;
	char	*d;

	if (checkerror(base_to) == 0 || checkerror(base_from) == 0)
		return (0);
	mednbr = ft_atoi_base(nbr, base_from);
	length_nbrf = length_nbr(mednbr, base_to, 0);
	finalnbr = ((char *)malloc(sizeof(char) * (length_nbrf + 1)));
	d = finalnbr;
	if (!d)
		return (0);
	ft_putnbr_v2(mednbr, base_to, finalnbr);
	finalnbr[length_nbrf] = '\0';
	return (finalnbr);
}

/*
int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
	return(0);
}
*/
