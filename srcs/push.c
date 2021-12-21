/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:31:57 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/21 18:04:25 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	pb(t_a *a, t_b *b)
{
	int	pushed;
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (a->nsize != 0)
	{
		pushed = a->tab[0];
		while (i < a->nsize - 1)
			a->tab[j++] = a->tab[++i];
		i = b->nsize;
		j = b->nsize;
		while (i > 0)
			b->tab[j--] = b->tab[--i];
		b->nsize++;
		a->nsize--;
		b->tab[0] = pushed;
		a->tab[a->nsize] = 0;
	}
	write(1, "pb\n", 3);
}

void	pa(t_a *a, t_b *b)
{
	int	pushed;
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (b->nsize != 0)
	{
		pushed = b->tab[0];
		while (i < b->nsize - 1)
			b->tab[j++] = b->tab[++i];
		i = a->nsize;
		j = a->nsize;
		while (i > 0)
			a->tab[j--] = a->tab[--i];
		a->nsize++;
		b->nsize--;
		a->tab[0] = pushed;
		b->tab[b->nsize] = 0;
	}
	write(1, "pa\n", 3);
}
