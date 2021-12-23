/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:08:56 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/23 04:23:22 by cmarouf          ###   ########.fr       */
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

void sort_3(t_a *a, t_b *b)
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

void	smart_place(t_a *a, t_b *b)
{
	sa(a);
	print_stack(a, b, "sa");
	if (is_sort(a))
		return ;
	ra(a);
	print_stack(a, b, "ra");
	sa(a);
	print_stack(a, b, "sa");
	rra(a);
	print_stack(a, b, "rra");
}

void	smart_place2(t_a *a, t_b *b)
{
	rra(a);
	print_stack(a, b, "rra");
	sa(a);
	print_stack(a, b, "sa");
	ra(a);
	print_stack(a, b, "ra");
	ra(a);
	print_stack(a, b, "ra");
}

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
	printf("%d\n", low);
	while (a->tab[0] != low)
	{
		if (best == 1)
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
}

void	sort_5(t_a *a, t_b *b)
{
	print_stack(a, b, "pb");
	find_best(a, b, lowest_number(a));
	find_best(a, b, lowest_number(a));
	sort_3(a, b);
	while (1)
	{
		if (a->nsize == a->len && is_sort(a) == 1)
			break ;
		pa(a, b);
		if (!is_sort(a))
		{
			if (biggest_number(a->tab[0], a))
			{
				ra(a);
				print_stack(a, b, "ra");
			}
			else if (a->nsize == 4)
				smart_place(a, b);
			else if (a->tab[0] < a->tab[4] && a->tab[0] > a->tab[3])
				smart_place2(a, b);
			else if (a->tab[0] < a->tab[4] && a->tab[0] > a->tab[3])
				smart_place(a, b);
		}
	}
	print_stack(a, b, "pb");
}

void	small_algo(t_a *a, t_b *b)
{
	if (a->nsize <= 3)
		sort_3(a, b);
	else if (a->nsize <= 5)
		sort_5(a, b);
}
