/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:29:52 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/19 23:37:04 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	parsing_2(char **av)
{
	t_a *a;
	t_b	*b;
	int	i;
	int	word;
	char	**argv;

	a = NULL;
	b = NULL;
	if (!init_struct(a, b))
		return (0);
	argv = ft_split(av[1], " ");
	i = -1;
	word = w_count(av[1], " ");
	a->tab = malloc(sizeof(int) * (word));
	if (!a->tab)
		return (0);
	b->tab = malloc(sizeof(int) * (word));
	if (!b->tab)
		return (0);
	while (++i < word)
		a->tab[i] = ft_atoi(argv[i]);
	return (1);
}
