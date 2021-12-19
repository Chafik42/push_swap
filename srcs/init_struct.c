/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:25:53 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/19 23:29:28 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	init_struct(t_a *a, t_b *b)
{
	b = (t_b *)malloc(sizeof(t_b));
	if (!b)
		return (0);
	a = (t_a *)malloc(sizeof(t_a));
	if (!a)
		return (0);
	return (1);
}
