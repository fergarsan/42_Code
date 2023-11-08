/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 02:14:35 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/26 02:30:02 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;
	char	*d;

	index = 0;
	d = ((dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)));
	if (!d)
	{
		return (0);
	}
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*
int	main (void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf ("original	: base	: $%s$ @ %p\n", str, str);
	allocated  = strdup(str);
	printf("copied		: alloc	: $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup (str);
	printf ("ft_copied	: alloc : $%s$ @ %p\n", allocated, allocated);
	return (0);
}
*/
