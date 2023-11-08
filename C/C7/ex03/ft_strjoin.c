/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 05:52:53 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/26 06:26:26 by fernagar         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	j;

	j = 0;
	while (j < size)
	{
		final_length = final_length + ft_strlen(strings[j]);
		final_length = final_length + sep_length;
		j++;
	}
	final_length = final_length - sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		k;
	char	*string;
	char	*d;

	k = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_compute_final_length(strs, size, ft_strlen(sep));
	string = (char *)malloc((full_length + 1) * sizeof(char));
	d = string;
	if (!d)
		return (0);
	while (k < size)
	{
		ft_strcpy(d, strs[k]);
		d = d + ft_strlen (strs[k]);
		if (k < size - 1)
		{
			ft_strcpy(d, sep);
			d = d + ft_strlen(sep);
		}
		k++;
	}
	return (string);
}

/*
int	main(void)
{
	char 	**strs;
	char 	*separator;
	char 	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs [0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs [1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs [2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs [1] = "friend,";
	strs [2] = "You are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
	return (0);
}
*/
