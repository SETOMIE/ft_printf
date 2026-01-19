# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/19 15:54:59 by asyeo             #+#    #+#              #
#    Updated: 2026/01/19 16:04:28 by asyeo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFTDIR = libft

SRC = ft_printf.c \
	ft_printf_utils.c 

OBJS = ${SRC:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LIBFT = $(LIBFTDIR)/libft.a

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -I. -I${LIBFTDIR} -c $< -o $@

${LIBFT}:
	${MAKE} -C ${LIBFTDIR}

${NAME}: ${LIBFT} ${OBJS} 
	cp ${LIBFT} ${NAME}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	${RM} ${NAME}
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re