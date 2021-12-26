/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 01:37:07 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/26 16:13:55 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"
#include <stdio.h>

void	print_stack(t_a *a, t_b *b, char *str)
{
	int	i;
	int	ai;
	int	bi;

	i = -1;
	ai = a->nsize - 1;
	bi = b->nsize - 1;
	printf("%s", str);
	printf("\n ____________________\n");
	printf("|a      	   b\n");
	while (++i < a->len)
	{
		if (bi < i && ai < i)
			printf("|               \n");
		else if (ai < i)
			printf("|             %d \n", b->tab[i]);
		else if (bi < i)
			printf("| %d             \n", a->tab[i]);
		else
			printf("| %d           %d \n", a->tab[i], b->tab[i]);
	}
	printf(" ____________________\n\n");
}
