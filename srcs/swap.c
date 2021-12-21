/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:12:16 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/21 16:08:24 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	sa(t_a *a)
{
	int	temp;

	temp = 0;
	if (a->nsize >= 2)
	{
		temp = a->tab[0];
		a->tab[0] = a->tab[1];
		a->tab[1] = temp;
	}
	write(1, "sa\n", 3);
}

void	sb(t_b *b)
{
	int	temp;

	temp = 0;
	if (b->nsize >= 2)
	{
		temp = b->tab[0];
		b->tab[0] = b->tab[1];
		b->tab[1] = temp;
	}
	write(1, "sb\n", 3);
}

void	ss(t_a *a, t_b *b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}
