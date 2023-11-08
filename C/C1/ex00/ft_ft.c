/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:54:44 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/14 14:39:48 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
void	ft_putchar(char b)
{
	write (1, &b, 1);
}

void	ft_putnbr(int nb)
{
	int	a;

	if (nb / 10 >= 1)
	{
		a = nb % 10;
		ft_putnbr (nb / 10);
		ft_putchar (a + '0');
	}
	else
	{
		ft_putchar (nb + '0');
	}
}

int	main(void)
{
	int	nbr;

	nbr = 2;
	ft_ft(&nbr);
	ft_putnbr(nbr);
	return (0);
}
*/
