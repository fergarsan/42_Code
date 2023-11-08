/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:18:42 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/20 23:42:01 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[j] != '\0')
	{
		while (str [i + j] == to_find[i] && str [i + j] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			return (str + j);
		}
		j++;
		i = 0;
	}
	return (0);
}

/*
int	main(void)
{
	char	*out;

	out = ft_strstr("Kisama, kono ore sama ni kateru no ka", "ore");
	printf("%s", out);
	return (0);
}
*/
