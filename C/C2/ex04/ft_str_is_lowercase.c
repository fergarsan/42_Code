/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:19:18 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/13 23:54:39 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	o;
	int	i;

	o = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122))
		{
			o++;
		}
		i++;
	}
	if (o > 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/*
int	main(void)
{
	int	a;

	a = ft_str_is_lowercase("");
	printf("%d", a);
	return (0);
}
*/
