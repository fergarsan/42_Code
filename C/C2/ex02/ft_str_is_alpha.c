/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:19:12 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/13 23:55:13 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	o;
	int	i;

	o = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
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

	a = ft_str_is_alpha("");
	printf("%d", a);
	return (0);
}
*/
