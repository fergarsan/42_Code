/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 22:52:21 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/22 01:29:03 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 1)
	{
		if (power < 0)
		{
			res = 0;
		}
		else
		{
			res = 1;
		}
	}
	else
	{
		res = nb * ft_recursive_power(nb, power - 1);
	}
	return (res);
}

/*
int main (void)
{
    int res;
    int nb;
    int power;

    scanf("%d", &nb);
    scanf("%d", &power);
    res = ft_recursive_power(nb, power);
    printf("%d",res);
    return (0);
}
*/
