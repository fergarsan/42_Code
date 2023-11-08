/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 00:54:39 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/23 18:58:07 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexaconvert(int b)
{
	int		a;
	int		x;
	char	c;
	char	d;

	a = b / 16;
	x = b % 16;
	c = a + '0';
	d = x + '0';
	if (x > 9)
	{
		x = x + 87;
		d = x;
	}
	write (1, "\\", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		b;
	char	y;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			y = str[i];
			b = y;
			ft_hexaconvert(b);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return(0);
}
*/
