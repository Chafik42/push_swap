/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:38:53 by cmarouf           #+#    #+#             */
/*   Updated: 2022/01/03 15:39:22 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	ft_error(t_core *core)
{
	write(2, "Error\n", 6);
	free(core->a);
	free(core->b);
	free(core);
	return (0);
}

int	ft_error2(t_core *core)
{
	free(core->a);
	free(core->b);
	free(core);
	return (0);
}

int	ft_error3(void)
{
	write(2, "Error\n", 6);
	return (0);
}

int	ft_error4(char **tofree, t_a *a, t_b *b)
{
	int	i;

	i = 0;
	while (tofree[i])
	{
		free(tofree[i]);
		i++;
	}
	free(tofree);
	free(a->tab);
	free(b->tab);
	write(2, "Error\n", 6);
	return (0);
}
