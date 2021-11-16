# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 17:55:37 by rblondia          #+#    #+#              #
#    Updated: 2021/11/16 11:16:13 by lfilloux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	utils/ft_putchar.c            \
		utils/ft_putnbr.c             \
		utils/ft_putnbr_base.c        \
		utils/ft_putstr.c             \
		printer/ft_printer.c          \
		printer/ft_print_char.c       \
		printer/ft_print_pointer.c    \
		printer/ft_print_int.c        \
		printer/ft_print_large_hexa.c \
		printer/ft_print_small_hexa.c \
		printer/ft_print_str.c        \
		printer/ft_print_unsigned.c   \
		ft_printf.c
		

OBJS = ${SRCS:.c=.o}

INCLUDES = ft_printf.h

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

%.o: %.c ft_printf.h
		${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${BONUS_OBJS} 

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:			all clean fclean re %.o