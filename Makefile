# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 13:46:07 by begarijo          #+#    #+#              #
#    Updated: 2022/11/07 10:56:09 by begarijo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libftprintf.a

SRC		= 	ft_printchar.c ft_printnumber.c ft_printhexa.c \
		  	ft_printunsigned.c ft_printstr.c ft_printptr.c \
		 	ft_printf.c \

OBJ		= 	$(SRC:.c=.o)

CFLAGS	= 	-Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	
			gcc -c $(SRC) $(CFLAGS)
			ar rcs $(NAME) $(OBJ)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all, clean, fclean, re
