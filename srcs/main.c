/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:23:03 by cmarouf           #+#    #+#             */
/*   Updated: 2022/01/03 15:40:15 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	init_struct(t_core *core)
{
	core->a = (t_a *)malloc(sizeof(t_a));
	if (!core->a)
		return (0);
	core->b = (t_b *)malloc(sizeof(t_b));
	if (!core->b)
		return (0);
	return (1);
}

void	ft_free(t_core *core)
{
	free(core->a->tab);
	free(core->b->tab);
	free(core->a);
	free(core->b);
	free(core);
}

int	main(int ac, char **av)
{
	t_core	*core;

	core = (t_core *)malloc(sizeof(t_core));
	if (!core)
		return (ft_error(core));
	if (!init_struct(core))
		return (ft_error(core));
	if (ac > 1)
	{
		if (ac == 2)
			if (!parsing_2(av, core->a, core->b, -1)
				|| !check_doubles(core->a, core->b))
				return (ft_error2(core));
		if (ac > 2)
			if (!parsing_1(ac, av, core->a, core->b)
				|| !check_doubles(core->a, core->b))
				return (ft_error2(core));
		algo(core->a, core->b);
		ft_free(core);
	}
	else
		return (ft_error2(core));
	return (0);
}
