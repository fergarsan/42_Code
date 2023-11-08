/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_total.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gebravo- <gebravo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:32:50 by gebravo-          #+#    #+#             */
/*   Updated: 2023/07/09 16:47:15 by gebravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_last_line(int y, int x)
{
	int	i;

	i = 0;
	if (x > 0)
	{
		while (i < (y - 2))
		{
			ft_putchar('B');
			i++;
		}
	}
}

void	ft_middle_line(int y, int x)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((i < (x - 2)) && (y > 0))
	{
		ft_putchar('B');
		if (y > 2)
		{
			while (j < (y - 2))
			{
				ft_putchar(' ');
				j++;
			}
		}
		i++;
		if (y > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		j = 0;
	}
}

void	rush(int y, int x)
{
	if (y > 0 && x > 0)
	{
		ft_putchar('A');
	}
	ft_first_last_line(y, x);
	if (y >= 2 && x > 0)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
	if (x > 2)
	{
		ft_middle_line(y, x);
	}
	if (y > 0 && x > 1)
	{
		ft_putchar('C');
	}
	if (y > 1 && x > 1)
	{
		ft_first_last_line(y, x);
		ft_putchar('C');
	}
}
