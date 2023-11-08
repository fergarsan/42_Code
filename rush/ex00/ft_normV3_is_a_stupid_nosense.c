/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normV3_is_a_stupid_nosense.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:27:43 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/16 19:28:11 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_normV3_is_a_stupid_nosense(int *n, i)
{
	int a;
	int	sum;
	int j

	sum = 0;
	a = 1;
	j = 0;
	while (a < 5)
	{
		while (j < 4)
		{
			if (a == n[i][j])
			{
				sum++;
			}
			j++;
		}
		j = 0;
		a++;
	}
	return(sum);
}
