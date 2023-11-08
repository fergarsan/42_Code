/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:39:45 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/17 11:09:00 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_put_char(int b)
{
	char	c;

	c = b + '0';
	write(1, &c, 1);
}

void ft_print_combn (int n)
{
	int j;
	int b;
	int k;

	b = 0;
	k = 0;
	j = 0;;
	if (!(n < 1 || n > 9))
	{
		while (j < 9 - (n - 1))
		{
			ft_put_char(j);
			if(n > 1)
			{
				k = b + 1;
				ft_print_combn(n - 1);
				ft_put_char(j);
				k = b;
			}
			j++;
		}
		write(1, ", ", 2);
	}
}

int	main(void)
{
	int n; 

	scanf("%d", &n);
	ft_print_combn(n);
	return (0);
}
