# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/19 22:44:13 by cmarouf           #+#    #+#              #
#    Updated: 2021/12/23 02:36:25 by cmarouf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./srcs/main.c		\
	   ./srcs/parsing_1.c	\
	   ./srcs/parsing_2.c	\
	   ./srcs/error.c		\
	   ./srcs/check_parsing.c		\
	   ./srcs/algo.c		\
	   ./srcs/small_algo.c		\
	   ./srcs/rotate.c		\
	   ./srcs/rrotate.c		\
	   ./srcs/swap.c		\
	   ./srcs/push.c		\
	   ./srcs/utils_algo.c	\
	   ./srcs/print.c	\

UTILS = ./utils/ft_atoi.c	\
		./utils/ft_split.c	\

OBJS = ${SRCS:.c=.o}

OBJS_UTILS = ${UTILS:.c=.o}

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

CC = gcc

.c.o:
	${CC} -I includes ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJS) $(OBJS_UTILS)
	$(CC) $(CFLAGS) -g $(OBJS) $(OBJS_UTILS) -o $(NAME)

clean:
		$(RM) ${OBJS} ${OBJS_UTILS}

fclean: clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
