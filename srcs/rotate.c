/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:41:09 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/21 18:11:53 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	ra(t_a *a)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	i = 0;
	if (a->nsize != 0)
	{
		temp = a->tab[0];
		while (i < a->len - 1)
		{
			a->tab[i] = a->tab[j + 1];
			i++;
			j++;
		}
		a->tab[a->nsize - 1] = temp;
	}
	write(1, "ra\n", 3);
}

void	rb(t_b *b)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	i = 0;
	if (b->nsize != 0)
	{
		temp = b->tab[0];
		while (i < b->len - 1)
		{
			b->tab[i] = b->tab[j + 1];
			i++;
			j++;
		}
		b->tab[b->nsize - 1] = temp;
	}
	write(1, "rb\n", 3);
}

void	rr(t_a *a, t_b *b)
{
	rb(b);
	ra(a);
	write(1, "rr\n", 3);
}
