# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mykytaivanov <mykytaivanov@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 17:24:32 by mykytaivano       #+#    #+#              #
#    Updated: 2025/05/08 13:13:01 by mykytaivano      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
RM = rm -f

SRCS = ft_printf.c \
	   ft_putstr.c \
	   ft_putnbr.c \
	   ft_putchar.c \
	   ft_putnbr_unsigned.c \
	   ft_putnbr_hex_uppercase.c \
	   ft_putnbr_hex_lowercase.c \
	   ft_putnbr_hex_memory.c \
	   ft_putptr.c \
	   ft_handle_conversion.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
		$(AR) rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
		
clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all