/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:44:30 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/14 14:14:47 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	o;
	int	i;

	o = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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

	a = ft_str_is_printable("");
	printf("%d", a);
	return (0);
}
*/
