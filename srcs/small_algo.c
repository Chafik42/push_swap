/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:08:56 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/23 18:20:20 by cmarouf          ###   ########.fr       */
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

/*int	find_pathv2(t_a *a, int low)
{
	int	i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	while (i < a->nsize)
	{
		if (a->tab[i] < low && i <= a->nsize / 2)
			x++;
		else if (a->tab[i] < low && i > a->nsize / 2)
			y++;
		i++;
	}
	return (x - y);
}*/

/*void	find_bestv2(t_a *a, t_b *b, int low)
{
	int	best;

	best = find_pathv2(a, low + 200);
	while (a->tab[0] >= low + 200)
	{
		if (best >= 0)
			ra(a);
		else
			rra(a);
		while (a->tab[0] < low + 10)
			pb(a, b);
		if (lowest_number(a) >= low + 10)
			break;
	}
	print_stack(a, b, "v2");
	pb(a, b);
}*/

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

void	sort_3_b(t_b *b)
{
	if (b->nsize == 2)
		sb(b);
	while (!is_sort_b(b))
	{
		if (b->tab[0] > b->tab[1] && b->tab[1] > b->tab[2])
		{
			rb(b);
			sb(b);
		}
		if (b->tab[0] > b->tab[1] && b->tab[1] < b->tab[2]
			&& b->tab[0] < b->tab[2])
			sb(b);
		if (b->tab[0] > b->tab[1] && b->tab[1] < b->tab[2])
			rb(b);
		if (b->tab[0] < b->tab[1] && b->tab[1] > b->tab[2])
		{
			rrb(b);
			if (!is_sort_b(b))
				sb(b);
		}
	}
}

void	push_and_sort(t_a *a, t_b *b)
{
	pb(a, b);
	pb(a, b);
	pb(a, b);
	sort_3_b(b);
	pa(a, b);
	pa(a, b);
	pa(a, b);
}


