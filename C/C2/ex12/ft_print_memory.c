/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:43:10 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/17 14:58:54 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_count(char *addr)
{	
	int	s;

	s = 0;
	while (addr[s] != '\0')
	{
		s++;
	}
}


/* A ver como cojones hago que esto entre en menos líneas*/
/* Puedo añadir una condición tal que si la i es impar me imprime un espacio*/
void	ft_hexaperchar(char x)
{
	int	b;
	int c;
	int	d;
	char e;
	char f;

	b = x;
	c = b / 16;
	d = b % 16;
	if(c > 9)
	{
		c = c + 87;
		e  = c;
	}
	else 
	{	
		e = c + '0'
	}	
	if (d > 9)
	{
		d = d + 87;
		f = d;
	}
	else
	{
		f = d + '0';
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	int	j;
	int	s;
	int	*a;

	i = 0;
	j = 0;
	a = &addr;
	s = ft_count(addr);
	while (i < s / 16)
	{
		ft_firsthexa(addr, i);
		write(1, ": ", 2);
		while (j < 16 * (i + 1))
		{
			write(1, &addr[j], 1);
			j++;
		}
	write (1, '\n', 1);
	a = a + 16 * i;
	i++;
	}
}

int	main(void)
{
	int	j;
	
	return (0);
}

