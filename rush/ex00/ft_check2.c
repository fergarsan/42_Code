/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:18:11 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/16 19:19:04 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_acab(int *n, int i, int j);

int	ft_check2(int *n)
{
	int i;
	int j;
	int g;

	i = 0;
	j = 0;
	g = 0;
	while (i < 4)
	{
		if (g == 0)
		{
			while (j < 4)
			{
				g = ft_acab(*n, i, i);
				j++;
			}
			i++;
			j = 0;
		}
	}
	return (g);
}