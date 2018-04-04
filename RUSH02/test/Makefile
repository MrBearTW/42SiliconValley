# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cperng <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 13:32:13 by cperng            #+#    #+#              #
#    Updated: 2018/04/03 13:38:26 by cperng           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	gcc

FLAG	=	-Wall -Wextra -o

NAME	=	rush-2

SRC	=	rush2.c \
		ref00.c \
		ref01.c \
		ref03.c \
		ref04.c \
		libft.a

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAG) $(NAME) $(SRC)

clean:
	@/bin/rm -f $(OBJS)

fclean:
	@/bin/rm -f $(NAME)

re: fclean all
