/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:32:00 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/23 18:15:02 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	big_algo(t_a *a, t_b *b)
{
	int	i;
	int	temp;

	temp = 0;
	i = 0;
	(void)i;
	(void)temp;
/*	while (i < a->nsize && a->nsize >= 10)
	{
		if (a->tab[i] == lowest_number(a))
		{
			temp = a->tab[i];
			while (a->tab[0] != temp)
				ra(a);
			pb(a, b);
			i = 0;
		}
		i++;
	}*/
	while (a->nsize > 3)
		find_bestv2(a, b, lowest_number(a));
	sort_3(a);
	while (a->nsize != a->len)
		pa(a, b);
	print_stack(a, b, "FIN");
}
