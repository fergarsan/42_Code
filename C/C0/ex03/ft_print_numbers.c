/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:58:54 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/09 15:46:22 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	b;
	int		i;

	b = '0';
	i = 0;
	while (i < 10)
	{
		write(1, &b, 1);
		i++;
		b++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
