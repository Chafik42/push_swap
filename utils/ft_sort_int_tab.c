/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 22:30:04 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/24 00:14:50 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	d;
	int	f;

	d = 0;
	f = 0;
	while (d < size)
	{
		f = d + 1;
		while (f < size)
		{
			if (tab[d] > tab[f])
			{
				ft_swap(&tab[f], &tab[d]);
			}
			f++;
		}
		d++;
	}
}
