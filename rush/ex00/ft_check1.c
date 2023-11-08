/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:17:06 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/16 19:17:44 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_normV3_is_a_stupid_nosense(int *n, i);

int ft_check1(int *n)
{
	int i;
	int sum;
	int o;

	i = 0;
	o = 0;
	sum = 0;
	while (i < 4)
	{
		if(sum <= 4)
		{
			sum = ft_normV3_is_a_stupid_nosense(*n, i)
		}
		else
		{
			o = 1
		}
	i++;
	}
	return (o);
}
