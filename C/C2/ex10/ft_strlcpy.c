/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 23:30:50 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/23 19:11:23 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	s;

	s = 0;
	while (str[s] != 0)
	{
		s++;
	}
	return (s);
}	

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = ft_strlen(src);
	if (size != 0)
	{
		while ((i < x) && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}

/*
int	main(void)
{
	char	dest[10] = "Hola mundo";
	char	src[5] = "Adios";
	int		s;

	s = ft_strlcpy(dest, src, 4);
	printf("%s\t%d", dest, s);
	return (0);
}
*/
