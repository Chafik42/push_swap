/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:23:35 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/20 16:03:41 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	parsing_1(int ac, char **av, t_a *a, t_b *b)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	a->tab = malloc(sizeof(int) * (ac - 1));
	if (!a->tab)
		return (0);
	b->tab = malloc(sizeof(int) * (ac - 1));
	if (!b->tab)
		return (0);
	a->nsize = ac - 1;
	while (++i < ac)
	{
		if (!check_parsing(av[i]))
			return (0);
		a->tab[j++] = ft_atoi(av[i]);
	}
	return (1);
}
