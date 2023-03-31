# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 14:43:36 by ndesprez          #+#    #+#              #
#    Updated: 2023/03/31 18:21:35 by ndesprez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	= ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_strdup.c\
			ft_calloc.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\

SOURCES_BONUS = ft_lstnew.c

NAME = libft.a

OBJECTS	= ${SOURCES:.c=.o}

OBJECTS_BONUS = ${SOURCES_BONUS:.c=.o}

.c.o :
		gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

${NAME} : ${OBJECTS}
		ar rc ${NAME} ${OBJECTS}

bonus : ${OBJECTS_BONUS}
		ar rc ${NAME} ${OBJECTS_BONUS}

all : ${NAME}

clean :
		rm -f ${OBJECTS} ${OBJECTS_BONUS}

fclean : clean
		rm -f ${NAME}

re : fclean all