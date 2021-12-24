/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:32:00 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/24 00:52:54 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	big_algo(t_a *a, t_b *b)
{
	int	ret;
	int	middle;
	int	pivot;
	ret = 1;
	middle = 5;
	pivot = a->clone[middle];
	while (lowest_number(a) != pivot)
	{
		b_find_best(a, b, pivot);
	}
	while (!is_sort_b(b))
		sort_b(b);
	/*while (a->nsize > 3)
		find_best(a, b, lowest_number(a));
	sort_3(a);
	while (a->nsize != a->len)
		pa(a, b);*/
	//print_stack(a, b, "FIN");
	ret++;
	pivot = a->clone[middle * ret];
}
