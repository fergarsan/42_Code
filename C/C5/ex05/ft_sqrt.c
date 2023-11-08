/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:30:14 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/24 22:15:27 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b == 1)
	{
		return (1);
	}
	if (b <= 0)
	{
		return (0);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
				return (index);
			else
				index++;
		}
	}
	return (0);
}

/*
int	main(void)
{
	int n;
	int res;

	scanf("%d", &n);
	res = ft_sqrt(n);
	printf("%d", res);
	return (0);
}
*/
