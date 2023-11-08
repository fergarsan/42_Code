/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:58:54 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/09 15:44:55 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	b;
	int		i;

	i = 0;
	b = 'a';
	while (i < 26)
	{
		write(1, &b, 1);
		b++;
		i++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
