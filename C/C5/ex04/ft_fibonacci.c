/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:08:20 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/22 22:47:33 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int n)
{
	int	res;

	if (n >= 0)
	{
		if (n == 0)
		{
			res = 0;
		}
		if (n == 1)
		{
			res = 1;
		}
		if (n > 1)
		{
			res = ft_fibonacci(n - 2) + ft_fibonacci(n - 1);
		}
		return (res);
	}
	else
	{
		return (-1);
	}
}

/*
int main (void)
{
    int res;
    int n;
    scanf("%d", &n);
    res = ft_fibonacci(n);
    printf("%d", res);
    return (0);
}
*/
