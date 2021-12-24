/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:19:47 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/24 00:35:15 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int b_find_path(t_a *a, int pivot)
{
	int i;

	i = 0;
	while (i < a->nsize)
	{
		if (a->tab[i] < pivot && i <= a->nsize / 2)
			return (1);
		else if (a->tab[i] < pivot && i > a->nsize / 2)
			return (-1);
		i++;
	}
	return (0);
}

void    b_find_best(t_a *a, t_b *b, int pivot)
{
	int best;

	best = b_find_path(a, pivot);
	while (a->tab[0] < pivot)
	{
		if (best == 1)
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
}

void	algo(t_a *a, t_b *b)
{
	a->nsize = a->len;
	b->len = a->len;
	b->nsize = 0;
	a->clone = ft_intdup(a->tab, a->len);
	ft_sort_int_tab(a->clone, a->len);
	if (is_sort(a))
	{
		printf("Array is already sorted");
		return ;
	}
	if (a->nsize <= 3 || a->nsize <= 5)
		small_algo(a, b);
	else if (a->nsize > 5)
		big_algo(a, b);
	free(a->clone);
	return ;
}
