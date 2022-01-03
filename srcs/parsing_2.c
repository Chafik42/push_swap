/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:29:52 by cmarouf           #+#    #+#             */
/*   Updated: 2022/01/03 15:57:41 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	parsing_2(char **av, t_a *a, t_b *b, int i)
{
	int		word;
	char	**argv;

	if (w_count(av[1], ' ') <= 1)
		return (0);
	argv = ft_split(av[1], ' ');
	if (!argv)
		return (ft_error3());
	word = w_count(av[1], ' ');
	a->tab = malloc(sizeof(int) * (word));
	if (!a->tab || word == 1)
		return (0);
	b->tab = malloc(sizeof(int) * (word));
	if (!b->tab || word == 1)
		return (0);
	a->len = word;
	while (++i < word)
	{
		if (!check_parsing(argv[i]))
			return (ft_error4(argv, a, b));
		a->tab[i] = ft_atoi(argv[i]);
		free(argv[i]);
	}
	free(argv);
	return (1);
}
