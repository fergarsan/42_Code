/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:22:11 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/16 19:22:28 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(char	*tab)
{
	int	t;
	int	principio;
	int	final;

	principio = 0;
	final = 4;
	while (principio < final)
	{
		t = tab[principio];
		tab[principio] = tab[final];
		tab[final] = t;
		principio++;
		final--;
	}
}
