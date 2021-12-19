/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:09:23 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/19 23:36:50 by cmarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_a
{
	int	*tab;
	int	len;
	int	nsize;
}				t_a;

typedef struct s_b
{
	int	*tab;
	int len;
	int nsize;
}				t_b;

typedef struct s_core
{
	t_a a;
	t_b b;
}				t_core;


char	**ft_split(char *str, char *charset);
int		init_struct(t_a *a, t_b *b);
int		w_count(char *str, char *charset);
int		ft_atoi(const char *nptr);
int		ft_error(void);
int		parsing_1(int ac, char **av);
int		parsing_2(char **av);
#endif
