/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:58:03 by cmarouf           #+#    #+#             */
/*   Updated: 2022/01/03 15:46:45 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	search_doubles(int nbr, int index, t_a *a)
{
	while (index < a->len)
	{
		if (nbr == a->tab[index])
			return (0);
		index++;
	}
	return (1);
}

int	check_doubles(t_a *a, t_b *b)
{
	int	i;

	i = 0;
	while (i < a->len)
	{
		if (!search_doubles(a->tab[i], i + 1, a))
		{
			free(a->tab);
			free(b->tab);
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_parsing(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[0] < '0' || str[0] > '9') && (str[0] != '-' && str[0] != '+'))
			return (0);
		if ((str[i] < '0' || str[i] > '9') && i != 0)
			return (0);
		if (ft_atoi(str) > 2147483647 || ft_atoi(str) < -214748367)
			return (0);
		i++;
	}
	return (1);
}
