/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:08:25 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/17 13:24:30 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_s(char *str)
{
	unsigned int	s;

	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	return (s);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				s;

	i = 0;
	s = ft_s(dest);
	while (src[i] != 0 && (i < nb))
	{
		dest[s + i] = src[i];
		i++;
	}
	dest[s + i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	src [20] = "huevo";
	char	dest[20] = "comida: ";
	ft_strncat(dest, src, 4);
	printf("%s", dest);
	return (0);
}
*/
