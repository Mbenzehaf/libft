# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 18:28:42 by mben-zeh          #+#    #+#              #
#    Updated: 2022/10/08 18:28:46 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#CC=GCC
#GFLAG=-Wall -Wextra -Werror
#EXEC=LIBFT
#all: $(EXEC)
#LIBFT:main.o
#main.o:main.c libft.h
 #$(CC) -O main.O -c main.c $(GFLAG)
 #clean: 
#	rm -f *.o
NAME=libft.a
CC=cc
CFLAGS= -Wall -Werror -Wextra
SRCS = 	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_split.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
	
SRCS_BONUS =	ft_lstnew.c \
				ft_lstadd_front.c\
			 	ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c\
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \
	

OBJ = ${SRCS:.c=.o}
OBJ_BONUS = ${SRCS_BONUS:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	ar rc ${NAME} ${OBJ}

bonus : all ${OBJ_BONUS}
	ar rc ${NAME} ${OBJ_BONUS}
clean :
	rm -f $(OBJ) ${OBJ_BONUS}

fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY: all clean fclean re
