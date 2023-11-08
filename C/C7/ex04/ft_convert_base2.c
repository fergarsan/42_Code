/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:01:29 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/27 18:42:09 by fernagar         ###   ########.fr       */
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

int	length_nbr(int nbr, char *base, int length)
{
	int				base_length;
	unsigned int	nb;

	base_length = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * (-1);
		length++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned) base_length)
	{
		nb /= base_length;
		length++;
	}
	length++;
	return (length);
}

void	ft_putnbr_v2(int nbr, char *str, char *nbrf)
{
	int		length_base;
	long	nb;
	int		i;
	int		len_nbrf;

	length_base = ft_strlen(str);
	len_nbrf = length_nbr(nbr, str, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= (-1);
		i = 1;
	}
	len_nbrf--;
	while (nb >= length_base)
	{
		nbrf[len_nbrf] = str[nb % length_base];
		nb /= length_base;
		len_nbrf--;
	}
	if (nb < length_base)
		nbrf[i] = str [nb];
}
