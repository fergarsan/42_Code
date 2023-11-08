/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:17:30 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/26 03:10:08 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void	ft_putnbr(int nb)
{
	int	a;

	if (nb != -2147483648)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = 0 - nb;
		}
		if (nb / 10 >= 1)
		{
			a = nb % 10;
			ft_putnbr(nb / 10);
			ft_putchar(a + '0');
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
	else
	{
		write(1, "-2147483648", 11);
	}
}

int	main(void)
{
	int	nb;

	scanf("%d", &nb);
	ft_putnbr(nb);
	return (0);
}
