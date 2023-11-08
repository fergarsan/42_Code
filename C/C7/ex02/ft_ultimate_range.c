/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 04:13:33 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/26 05:48:21 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_tab(int *tab, int min, int bound)
{
	int	i;

	i = 0;
	while (i < bound)
	{
		tab[i] = min + i;
		i++;
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	*tab;
	int	*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	tab = malloc (bound * sizeof(int));
	d = tab;
	if (!d)
	{
		*range = 0;
		return (0);
	}
	*range = tab;
	ft_tab(tab, min, bound);
	return (bound);
}

/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
