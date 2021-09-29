# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 18:09:42 by rfkaier           #+#    #+#              #
#    Updated: 2021/09/29 18:09:43 by rfkaier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a
AR = ar
ARFLAGS = rc
RM = rm -f
CC = gcc
CFLAGS = -Wall -Werror -Wextra
##BONUS = 
SERVER = server
CLIENT = client

LIBFT = $(addprefix libft/,) \
	ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strdup.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strnstr.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_strlcpy.c \
	   ft_calloc.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strmapi.c \
	   ft_split.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_itoa.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \

SRC = server.c \
	client.c \

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft/
	mv libft/libft.a ./minitalk.a
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(CC) -o $(SERVER) server.c $(NAME)
	$(CC) -o $(CLIENT) client.c $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	make -C libft/ clean
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(SERVER) $(CLIENT)

re: fclean all