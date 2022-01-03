/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:19:47 by cmarouf           #+#    #+#             */
/*   Updated: 2022/01/03 14:47:46 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	algo(t_a *a, t_b *b)
{
	a->nsize = a->len;
	b->len = a->len;
	b->nsize = 0;
	a->clone = ft_intdup(a->tab, a->len);
	ft_sort_int_tab(a->clone, a->len);
	if (is_sort(a))
	{
		free(a->clone);
		return ;
	}
	if (a->nsize <= 3 || a->nsize <= 5)
		small_algo(a, b);
	else if (a->nsize > 5)
		big_algo(a, b);
	free(a->clone);
	return ;
}
