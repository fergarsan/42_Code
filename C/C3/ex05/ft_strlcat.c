/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:40:29 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/20 23:41:17 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	val;

	i = 0;
	j = 0;
	val = 0;
	while (dest [i] != '\0')
		i++;
	while (src [val] != '\0')
		val++;
	if (size <= i)
		val = val + size;
	else
		val = val + i;
	while (src [j] && (i + 1) < size)
	{
		dest [i] = src [j];
		i++;
		j++;
	}
	dest [i] = '\0';
	return (val);
}

/*
int main(void)
{
	char    dest[100] = "Ceci est un test de la fonction strlcat";
    char    *src = "Pour les piscineux francophone !";
    int     result;

	result = ft_strlcat(dest, src, 40);
    printf("%s\n, qui nous return  %d", dest, result);
    return (0);
}
*/
