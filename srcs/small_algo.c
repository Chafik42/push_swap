/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:08:56 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/24 00:35:00 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	find_path(t_a *a, int low)
{
	int	i;

	i = 0;
	while (i < a->nsize)
	{
		if (a->tab[i] == low && i <= a->nsize / 2)
			return (1);
		else if (a->tab[i] == low && i > a->nsize / 2)
			return (-1);
		i++;
	}
	return (0);
}

void	find_best(t_a *a, t_b *b, int low)
{
	int	best;

	best = find_path(a, low);
	while (a->tab[0] != low)
	{
		if (best == 1)
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
}

void	sort_3(t_a *a)
{
	if (a->nsize == 2)
		sa(a);
	while (!is_sort(a))
	{
		if (a->tab[0] > a->tab[1] && a->tab[1] > a->tab[2])
		{
			ra(a);
			sa(a);
		}
		if (a->tab[0] > a->tab[1] && a->tab[1] < a->tab[2]
			&& a->tab[0] < a->tab[2])
			sa(a);
		if (a->tab[0] > a->tab[1] && a->tab[1] < a->tab[2])
			ra(a);
		if (a->tab[0] < a->tab[1] && a->tab[1] > a->tab[2])
		{
			rra(a);
			if (!is_sort(a))
				sa(a);
		}
	}
}

void	sort_5(t_a *a, t_b *b)
{
	find_best(a, b, lowest_number(a));
	find_best(a, b, lowest_number(a));
	sort_3(a);
	pa(a, b);
	pa(a, b);
}

void	small_algo(t_a *a, t_b *b)
{
	if (a->nsize <= 3)
		sort_3(a);
	else if (a->nsize <= 5)
		sort_5(a, b);
}
