/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:29:52 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/20 17:02:00 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	parsing_2(char **av, t_a *a, t_b *b)
{
	int		i;
	int		word;
	char	**argv;

	i = -1;
	argv = ft_split(av[1], ' ');
	if (!argv)
		return (0);
	word = w_count(av[1], ' ');
	if (word == 1)
		return (0);
	a->tab = malloc(sizeof(int) * (word));
	if (!a->tab)
		return (0);
	b->tab = malloc(sizeof(int) * (word));
	if (!b->tab)
		return (0);
	a->nsize = word;
	while (++i < word)
	{
		if (!check_parsing(argv[i]))
			return (0);
		a->tab[i] = ft_atoi(argv[i]);
		free(argv[i]);
	}
	free(argv);
	return (1);
}
