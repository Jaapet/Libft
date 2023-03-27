# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 14:43:36 by ndesprez          #+#    #+#              #
#    Updated: 2023/03/27 17:49:17 by ndesprez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c
NAME	= libft.a
OBJECTS	=  ${SOURCES:.c=.o}
.c.o	:
		gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}
${NAME} : ${OBJECTS}
		ar rc ${NAME} ${OBJECTS}
all : ${NAME}
clean :
		rm -f ${OBJECTS}
fclean : clean
		rm -f ${NAME}
re : fclean all