/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 01:28:03 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/12 15:27:24 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	t;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size - i)
		{
			if (tab[j] > tab[j + 1])
			{
				t = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = t;
			}
		j++;
		}
	j = 0;
	i++;
	}
}

/*
int main(void)
{
	int size;
	int tab[5]={1, 5, 4, 3, 2};
	int k;

	k = 0;
	size = 5;
	ft_sort_int_tab(tab, size);
	while (k < size)
	{
		printf("%d", tab[k]);
		k++;
	}
	return (0);
}
*/
