/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:14:34 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/12 15:10:11 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	principio;
	int	final;

	principio = 0;
	final = size - 1;
	while (principio < final)
	{
		t = tab[principio];
		tab[principio] = tab[final];
		tab[final] = t;
		principio++;
		final--;
	}
}

/*
int	main(void)
{
	int	tab[4] = {1, 2, 3, 5};
	int	size;
	int j;
	
	j = 0;
	size = 4;
	ft_rev_int_tab(tab, size);
	while (j < size)
	{
		printf("%d", tab[j]);
		j++;
	}
	return (0);
}
*/
