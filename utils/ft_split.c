/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:30:18 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/19 22:44:06 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	is_charset(char c, char *charset)
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

int	w_count(char *str, char *charset)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset) == 0)
		{
			if (is_charset(str[i - 1], charset) == 1 || i == 0)
				word++;
		}
		i++;
	}
	return (word);
}

char	*get_string(char *str, char *charset)
{
	int			i;
	int			size;
	char		*tosplit;

	i = 0;
	size = 0;
	while (is_charset(str[i], charset) == 0 && str[i])
	{
		size++;
		i++;
	}
	tosplit = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (is_charset(str[i], charset) == 0 && str[i])
	{
		tosplit[i] = str[i];
		i++;
	}
	tosplit[i] = '\0';
	return (tosplit);
}

char	**ft_split(char *str, char *charset)
{
	char		**split;
	int			j;
	int			i;
	int			word;

	j = 0;
	i = 0;
	if (!str)
		return (NULL);
	word = w_count(str, charset);
	split = malloc(sizeof(char *) * (word + 1));
	split[word] = NULL;
	while (str[i])
	{
		if ((is_charset(str[i], charset) == 0)
			&& (i == 0 || is_charset(str[i - 1], charset) == 1)
			&& (j < word))
		{
			split[j] = get_string(&str[i], charset);
			j++;
		}
		i++;
	}
	return (split);
}
