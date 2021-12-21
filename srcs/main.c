/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:23:03 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/21 18:44:31 by cmarouf          ###   ########.fr       */
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
		return (ft_error());
	if (!init_struct(core))
		return (ft_error());
	if (ac > 1)
	{
		if (ac == 2)
		{
			if (!parsing_2(av, core->a, core->b, -1) || !check_doubles(core->a))
				return (ft_error());
		}
		else if (ac > 2)
		{
			if (!parsing_1(ac, av, core->a, core->b) || !check_doubles(core->a))
				return (ft_error());
		}
		algo(core->a, core->b);
	}
	/*int i = 0;
	while (i < 9)
	{
		printf("%d\n", core->a->tab[i]);
		i++;
	}
	i = 0;
	printf("================================\n");
	while (i < 9)
	{
		printf("%d\n", core->b->tab[i]);
		i++;
	}*/
	ft_free(core);
	return (0);
}
