/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 02:30:59 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/26 04:52:49 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	ft_abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	return (x);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*d;
	int	*tab;
	int	size;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	tab = malloc(size * sizeof(int));
	d = tab;
	if (!d)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
