# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-yaqi <yel-yaqi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 16:30:11 by yel-yaqi          #+#    #+#              #
#    Updated: 2023/11/19 17:08:27 by yel-yaqi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
       ft_isprint.c ft_tolower.c ft_toupper.c ft_strchr.c \
	   ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
	   ft_memmove.c ft_strlcpy.c
	#    ft_strnstr.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $@ $^

%.o: %.c libft.h
	cc $(CFLAGS) -c $<

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re