/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:19:47 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/21 18:44:09 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	algo(t_a *a, t_b *b)
{
	a->nsize = a->len;
	b->len = a->len;
	b->nsize = 0;
	pb(a, b);
	pb(a, b);
	pb(a, b);
	pb(a, b);
	pb(a, b);
	rra(a);
	pb(a, b);
	pa(a, b);
	ra(a);
	sb(b);
	ss(a, b);
}
