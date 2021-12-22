/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:08:56 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/22 18:50:26 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

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

void sort_3(t_a *a)
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

void	smart_place(t_a *a)
{
	sa(a);
	if (is_sort(a))
		return ;
	ra(a);
	sa(a);
	rra(a);
}

void	smart_place2(t_a *a)
{
	rra(a);
	sa(a);
	ra(a);
	ra(a);
}

void	sort_5(t_a *a, t_b *b)
{
	pb(a, b);
	pb(a, b);
	sort_3(a);
	while (is_sort(a) && b->nsize != 0)
	{
		pa(a, b);
		if (!is_sort(a))
		{
			if (biggest_number(a->tab[0], a))
				ra(a);
			else if (a->nsize == 4)
				smart_place(a);
			else if (a->tab[0] < a->tab[4] && a->tab[0] > a->tab[3])
				smart_place2(a);
			else if (a->tab[0] < a->tab[4] && a->tab[0] > a->tab[3])
				smart_place(a);
		}
	}
}

void	small_algo(t_a *a, t_b *b)
{
	if (a->nsize <= 3)
		sort_3(a);
	else if (a->nsize <= 5)
		sort_5(a, b);
}
