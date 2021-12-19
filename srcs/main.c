/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:23:03 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/19 23:36:02 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		if (ac == 2)
		{
			if (!parsing_1(ac, av))
				return (ft_error());
		}
		else if (ac > 2)
		{
			if (!parsing_2(av))
				return (ft_error());
		}
	}
	return (0);
}
