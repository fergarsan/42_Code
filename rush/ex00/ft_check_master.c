/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_master.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:05:00 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/16 19:50:07 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_trn(int n[4][4], int trn[4][4])

	int ft_check1(int *n);

int		ft_check2(int *n);

int		ft_check3(int *n);

int	ft_check_master(int *n)
{
	int	o;
	int	g;
	int	t;
	int	ogt;

	o = ft_check2(*n);
	g = ft_check3(*n);
	t = ft_check1(*n);
	trn(*n, *trn) ogt = ft_check1(*trn);
	if (o == 1 || g == 1 || t == 1 || ogt == 1)
		return (1);
}
