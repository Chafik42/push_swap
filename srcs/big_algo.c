/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:32:00 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/26 16:09:34 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	index_search(t_a *a, int nbr)
{
	int	i;

	i = 0;
	while (i < a->len)
	{
		if (a->clone[i] == nbr)
			return (i);
		i++;
	}
	return (0);
}

void	fill_index(t_a *a)
{
	int	i;

	i = 0;
	while (i < a->len)
	{
		a->tab[i] = index_search(a, a->tab[i]);
		i++;
	}
}

void	big_algo(t_a *a, t_b *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	fill_index(a);
	while (!is_sort(a))
	{
		j = 0;
		while (j < a->len)
		{
			if (((a->tab[0] >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (b->nsize != 0)
			pa(a, b);
		i++;
	}
}
