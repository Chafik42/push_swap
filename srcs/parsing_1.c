/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:23:35 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/19 23:30:40 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	parsing_1(int ac, char **av)
{
	t_a *a;
	t_b *b;

	a = NULL;
	b = NULL;
	int	i;

	if (!init_struct(a, b))
		return (0);
	i = -1;
	av++;
	a->tab = malloc(sizeof(int) * (ac - 1));
	if (!a->tab)
		return (0);
	b->tab = malloc(sizeof(int) * (ac - 1));
	if (!b->tab)
		return (0);
	while (++i < ac)
		a->tab[i] = ft_atoi(av[i]);
	return (1);
}
