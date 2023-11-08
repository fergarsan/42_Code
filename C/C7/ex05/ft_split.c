/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernagar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:23:10 by fernagar          #+#    #+#             */
/*   Updated: 2023/07/27 18:19:35 by fernagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_check_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	cnt_strings(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_check_separator(str[i], charset) == 1)
		{
			i++;
		}
		if (str[i] != '\0')
		{
			count++;
		}
		while (str[i] != '\0' && ft_check_separator(str[i], charset) == 0)
		{
			i++;
		}
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != 0 && ft_check_separator(str[i], charset) == 0)
	{
		i++;
	}
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	char	*word;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	strings = (char **)malloc(sizeof(char *) * (cnt_strings(str, charset) + 1));
	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && ft_check_separator(*str, charset) == 1)
		{
			str++;
		}
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str != '\0' && ft_check_separator(*str, charset) == 0)
		{
			str++;
		}
	}
	strings[i] = 0;
	return (strings);
}

/*
int	main(void)
{
	int	i;
	char **split;
	
	split = ft_split("la la la", " ");
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
*/
