# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/28 18:35:29 by mcaro-ro          #+#    #+#              #
#    Updated: 2025/01/28 20:39:44 by mcaro-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Project name
NAME = push_swap

# COLORS
GREEN = \033[0;32m
RESET := \033[0m

# INCLUDE directory
INCLUDE_DIR = includes
LIBFT_DIR = $(INCLUDE_DIR)/libft
FTPRINTF_DIR = $(INCLUDE_DIR)/ft_printf

# LIBRARIES
LIBFT = $(LIBFT_DIR)/libft.a
FTPRINTF = $(FTPRINTF_DIR)/libftprintf.a

# Rule to build the LIBFT library 
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) --silent

# Rule to build the FT_PRINTF library
$(FTPRINTF):
	@$(MAKE) -C $(FTPRINTF_DIR) --silent

# SRC DIRS
SRC_DIR = src
INCLUDE_DIRS = -I$(INCLUDE_DIR) -I$(SRC_DIR) -I$(LIBFT_DIR) -I$(FTPRINTF_DIR)

# Source files and object files
SRC = $(SRC_DIR)/main.c		\
	$(SRC_DIR)/push_swap.c	\
	$(SRC_DIR)/validate.c
	
# Objects files
OBJECTS = $(SRC:.c=.o)

# Compilation settings
CC = cc
CFLAGS = -Wall -Wextra -Werror $(INCLUDE_DIRS) -g3  -fsanitize=address

# Compile source files into object files
%.o: %.c
	@$(CC) -c $< $(CFLAGS) -o $@

# Link object files
$(NAME): $(OBJECTS) $(LIBFT) $(FTPRINTF)
	@$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT) $(FTPRINTF) -o $(NAME)
	@echo "$(GREEN)$(NAME): $(NAME) has been created successfully!$(RESET)"

# Default target to build the project
all: $(NAME)

# Clean up object files
clean:
	@rm -f $(OBJECTS)
	@$(MAKE) -C $(LIBFT_DIR) clean --silent
	@$(MAKE) -C $(FTPRINTF_DIR) clean --silent

# Clean up all generated files
fclean: clean
	@rm -rf $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean --silent
	@$(MAKE) -C $(FTPRINTF_DIR) fclean --silent

# Rebuild the project
re: fclean all

# Run Norminette
norm: 
	norminette $(INCLUDE_DIR) $(SRC)

normsrc: 
	norminette $(SRC)

normincludes: 
	norminette $(INCLUDE_DIR)

.DEFAULT_GOAL := all
.PHONY: all clean fclean re norm normsrc normincludes
