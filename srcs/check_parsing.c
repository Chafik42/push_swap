/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:58:03 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/20 15:53:34 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	search_doubles(int nbr, int index, t_a *a)
{
	while (index < a->nsize)
	{
		if (nbr == a->tab[index])
			return (0);
		index++;
	}
	return (1);
}

int	check_doubles(t_a *a)
{
	int	i;

	i = 0;
	printf("TOTAL = %d\n", a->nsize);
	while (i < a->nsize)
	{
		if (!search_doubles(a->tab[i], i + 1, a))
			return (0);
		i++;
	}
	return (1);
}

int	check_parsing(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[0] < '0' || str[0] > '9') && (str[0] != '-' && str[0] != '+'))
		{
			printf("Sign Error");
			return (0);
		}
		if ((str[i] < '0' || str[i] > '9') && i != 0)
		{
			printf("Not a Number Error");
			return (0);
		}
		if (ft_atoi(str) > 2147483647 || ft_atoi(str) < -214748367)
		{
			printf("HAAAAAAA3");
			return (0);
		}
		i++;
	}
	return (1);
}
