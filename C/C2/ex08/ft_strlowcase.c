/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 23:44:59 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/14 12:48:50 by fernagar         ###   ########.fr       */
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

/*
int	main(void)
{
	char	str[] = "HOL4 /M.GOS" ;
	char	*dest;
	int		j;

	j = 0;
	dest = ft_strlowcase(str);
	while(str[j] != '\0')
	{
		printf("%c",dest[j]);
		j++;
	}
	return (0);
}
*/
