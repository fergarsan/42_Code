/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:18:38 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/20 01:26:10 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *v)
{
	int	s;

	s = 0;
	while (v[s] != '\0')
	{
		s++;
	}
	return (s);
}

int	ft_atoi(char *src)
{
	int	i;
	int	res;
	int	nf;

	nf = 0;
	res = 0;
	i = 0;
	while ((*src >= 9 && *src <= 13) || *src == 32)
		src++;
	while (*src == '-' || *src == '+')
	{
		if (*src == '-')
			nf++;
		src++;
	}
	while (src[i] >= 48 && src[i] <= 57)
	{
		res = res * 10 + (src[i] - 48);
		i++;
	}
	if (nf != 0 && nf % 2 != 0)
		res = res * (-1);
	return (res);
}

/*
int	main(void)
{
	char	src[40] = "---++--+1234ab567";
	int		res;

	res = ft_atoi(src);
	printf("%d", res);
	return (0);
}
*/
