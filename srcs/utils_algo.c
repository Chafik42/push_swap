/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:39:55 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/26 16:10:54 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	is_sort(t_a *a)
{
	int	i;

	i = 1;
	if (a->nsize == 0 || a->nsize == 1)
		return (1);
	while (i < a->nsize)
	{
		if (a->tab[i - 1] > a->tab[i])
			return (0);
		i++;
	}
	return (1);
}

int	biggest_number(int nbr, t_a *a)
{
	int	i;

	i = 0;
	while (i < a->nsize)
	{
		if (a->tab[i] > nbr)
			return (0);
		i++;
	}
	return (1);
}

int	lowest_number(t_a *a)
{
	int	i;
	int	temp;

	i = 0;
	temp = a->tab[i];
	while (i < a->nsize)
	{
		if (a->tab[i] < temp)
			temp = a->tab[i];
		i++;
	}
	return (temp);
}
