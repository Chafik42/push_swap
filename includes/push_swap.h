/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:09:23 by cmarouf           #+#    #+#             */
/*   Updated: 2021/12/20 16:29:39 by cmarouf          ###   ########.fr       */
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
	t_a *a;
	t_b *b;
}				t_core;


char	**ft_split(char const *s, char c);
int		w_count(char const *s, char c);
int		ft_atoi(const char *nptr);
int		ft_error(void);
int		parsing_1(int ac, char **av, t_a *a, t_b *b);
int		parsing_2(char **av, t_a *a, t_b *b);
int		check_parsing(char *str);
int		check_doubles(t_a *a);
#endif
