/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:18:20 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/15 11:42:17 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char b)
{
	write (1, &b, 1);
}

void	rush00t(int y, int x)
{
	int i;
	int j;
	
	i = 1;
	j = 1;
	while (j <= x)
	{
		while (i <= y)
		{
			if ((i==1 || i==y) && (j==1 || j==x))
			{
				ft_putchar('o');
			}else if (!((j > 1 && j < x) && (i > 1 && i < y)))
				{
				   	  putchar('-');
				} else
				  {
					  putchar(' ');
				  }
			i++;
			}
	i=1;
	ft_putchar('\n');
	j++;	
	}
}

int main(void)
{
	int y;
	int x;
	scanf("%d",&y);
	scanf("%d",&x);
	rush00t(y,x);
}
