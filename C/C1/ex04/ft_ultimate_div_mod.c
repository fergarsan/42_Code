/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 23:17:40 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/12 15:32:55 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d" "%d", a, b);
	return (0);
}
*/
