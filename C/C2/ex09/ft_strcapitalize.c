/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 00:03:59 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/17 12:32:55 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 'a' - 'A';
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + a;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b;
	int	f;

	str = ft_strlowcase(str);
	b = 'A' - 'a';
	i = 0;
	f = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (f == 1)
				str[i] = str[i] + b;
			f = 0;
		}
		else if (!(str[i] > 47 && str[i] < 58))
			f = 1;
		else
			f = 0;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[61] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int		i;

	
	ft_strcapitalize(str);
	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}
*/
