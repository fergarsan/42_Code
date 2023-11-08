/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:58:39 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/14 14:14:07 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 'A' - 'a';
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	char	str[];
	char	*dest;
	int		j;

	str[] = "hol4 /m.gos";
	j = 0;
	dest = ft_strupcase(str);
	while(str[j] != '\0')
	{
		printf("%c",dest[j]);
		j++;
	}
	return (0);
}
*/
