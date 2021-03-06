/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:09:23 by cmarouf           #+#    #+#             */
/*   Updated: 2022/01/03 15:38:48 by cmarouf          ###   ########.fr       */
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
	int	*clone;
}				t_a;

typedef struct s_b
{
	int	*tab;
	int	len;
	int	nsize;
}				t_b;

typedef struct s_core
{
	t_a	*a;
	t_b	*b;
}				t_core;

char	**ft_split(char const *s, char c);
void	ft_sort_int_tab(int *tab, int size);
int		*ft_intdup(int const *src, size_t len);
int		w_count(char const *s, char c);
int		ft_atoi(const char *nptr);
int		ft_error(t_core *core);
int		ft_error2(t_core *core);
int		ft_error3(void);
int		ft_error4(char **tofree, t_a *a, t_b *b);
void	ft_exit(t_core *core);
int		parsing_1(int ac, char **av, t_a *a, t_b *b);
int		parsing_2(char **av, t_a *a, t_b *b, int i);
int		check_parsing(char *str);
int		check_doubles(t_a *a, t_b *b);
void	algo(t_a *a, t_b *b);
void	small_algo(t_a *a, t_b *b);
void	big_algo(t_a *a, t_b *b);
int		biggest_number(int nbr, t_a *a);
int		lowest_number(t_a *a);
int		lowest_number_b(t_b *b);
int		biggest_number_b(int nbr, t_b *b);
void	find_best(t_a *a, t_b *b, int low);
//void	find_bestv2(t_a *a, t_b *b, int low);
void	sort_5(t_a *a, t_b *b);
void	sort_3(t_a *a);
//void	sort_b(t_b *b);
int		is_sort(t_a *a);
int		is_sort_b(t_b *b);
void	sa(t_a *a);
void	sb(t_b *b);
void	ss(t_a *a, t_b *b);
void	pa(t_a *a, t_b *b);
void	pb(t_a *a, t_b *b);
void	ra(t_a *a);
void	rb(t_b *b);
void	rr(t_a *a, t_b *b);
void	rra(t_a *a);
void	rrb(t_b *b);
void	rrr(t_a *a, t_b *b);
void	print_stack(t_a *a, t_b *b, char *str);
void	ft_free(t_core *core);

#endif
