/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:16:05 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/21 16:06:14 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	rra(t_a *a)
{
	int	i;
	int	j;
	int	temp;

	j = a->nsize - 1;
	i = a->nsize - 1;
	temp = a->tab[a->nsize - 1];
	while (i > 0)
	{
		a->tab[i] = a->tab[j - 1];
		i--;
		j--;
	}
	a->tab[0] = temp;
	write(1, "rra\n", 4);
}

void	rrb(t_b *b)
{
	int	i;
	int	j;
	int	temp;

	j = b->nsize - 1;
	i = b->nsize - 1;
	temp = b->tab[b->nsize - 1];
	while (i > 0)
	{
		b->tab[i] = b->tab[j - 1];
		i--;
		j--;
	}
	b->tab[0] = temp;
	write(1, "rrb\n", 4);
}
void	rrr(t_a *a, t_b *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
