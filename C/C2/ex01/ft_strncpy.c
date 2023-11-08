/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:44:05 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/13 23:55:36 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	count(char *v)
{
	unsigned int	j;

	j = 0;
	while (v[j] != '\0')
	{
		j++;
	}
	return (j);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	k;
	unsigned int	i;

	i = 0;
	k = count(src);
	while ((i < n) && (i < k))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	*src = "kekw";
	char	dest[100] = "ahahahahaha";

	printf("%s", ft_strncpy(dest, src, 3));
}
*/
