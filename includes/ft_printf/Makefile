# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 12:10:35 by mcaro-ro          #+#    #+#              #
#    Updated: 2024/12/16 17:24:29 by mcaro-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror $(PATHS)
PATHS = -I./ -I$(SRC_PATH) -I$(UTILS_PATH) -I$(PUT_PATH)

SRC_PATH = src
UTILS_PATH = $(SRC_PATH)/utils
PUT_PATH = $(UTILS_PATH)/put

SOURCE = $(SRC_PATH)/ft_printf.c \
	 $(SRC_PATH)/ft_switch_format.c \
	 $(UTILS_PATH)/ft_strlen.c \
	 $(PUT_PATH)/ft_putchar_count.c \
	 $(PUT_PATH)/ft_putstr_count.c \
	 $(PUT_PATH)/ft_putpointer_count.c \
	 $(PUT_PATH)/ft_putnbr.c \
	 $(PUT_PATH)/ft_putnbr_base.c \

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)


$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	echo "\033[0;32m$(NAME) has been created successfully!\033[0m"

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.DEFAULT_GOAL := all

.PHONY: all clean fclean re
.SILENT:
