# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/28 18:35:29 by mcaro-ro          #+#    #+#              #
#    Updated: 2025/02/10 19:45:21 by mcaro-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Project name
NAME = push_swap

# COLORS
GREEN = \033[0;32m
RESET := \033[0m

# INCLUDE directory
INCLUDE_DIR = inc
LIBFT_DIR = $(INCLUDE_DIR)/libft
FTPRINTF_DIR = $(INCLUDE_DIR)/ft_printf
TEST_DIR = test/inc

# SRC DIRS
SRC_DIR = src
LIBFT_DIR = $(SRC_DIR)/libft
FTPRINTF_DIR = $(SRC_DIR)/ft_printf
PUSH_SWAP_DIR = $(SRC_DIR)/push_swap
SORT_DIR = $(SRC_DIR)/sort
UTILS_DIR = $(SRC_DIR)/utils
STACK_DIR = $(SRC_DIR)/stack
NODE_DIR = $(STACK_DIR)/node
COMMANDS_DIR = $(STACK_DIR)/commands
PRINT_STACKS_DIR = test/src

# LIBRARIES
LIBFT = $(LIBFT_DIR)/libft.a
FTPRINTF = $(FTPRINTF_DIR)/libftprintf.a

# Rule to build the LIBFT library 
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) --silent

# Rule to build the FT_PRINTF library
$(FTPRINTF):
	@$(MAKE) -C $(FTPRINTF_DIR) --silent

#Include dirs
INCLUDE_DIRS = -I$(INCLUDE_DIR) -I$(SRC_DIR) -I$(LIBFT_DIR) -I$(FTPRINTF_DIR) -I$(TEST_DIR)

# Source files and object files
SRC = $(SRC_DIR)/main.c					\
	$(PUSH_SWAP_DIR)/push_swap.c		\
	$(UTILS_DIR)/atol.c					\
	$(UTILS_DIR)/split_cursor.c			\
	$(UTILS_DIR)/handle_errors.c		\
	$(STACK_DIR)/stacks_utils.c			\
	$(STACK_DIR)/stacks_getters.c		\
	$(STACK_DIR)/stacks_operations.c	\
	$(NODE_DIR)/node.c					\
	$(NODE_DIR)/set_a_nodes.c			\
	$(NODE_DIR)/set_b_nodes.c			\
	$(COMMANDS_DIR)/swap.c				\
	$(COMMANDS_DIR)/push.c				\
	$(COMMANDS_DIR)/rotate.c			\
	$(COMMANDS_DIR)/reverse_rotate.c	\
	$(SORT_DIR)/sort.c					\
	$(PRINT_STACKS_DIR)/print_stack.c

# Objects files
OBJECTS = $(SRC:.c=.o)

# Compilation settings
CC = cc
CFLAGS = -Wall -Wextra -Werror $(INCLUDE_DIRS) -g3  #-fsanitize=address

# Compile source files into object files
%.o: %.c
	@$(CC) -c $< $(CFLAGS) -o $@

# Link object files
$(NAME): $(OBJECTS) $(LIBFT) $(FTPRINTF)
	@$(CC) $(CFLAGS) $(MAIN_OBJECTS) $(OBJECTS) $(LIBFT) $(FTPRINTF) -o $(NAME)
	@echo "$(GREEN)$(NAME): $(NAME) has been created successfully!$(RESET)"

# Default target to build the project
all: $(NAME)

# Clean up object files
clean:
	@rm -f $(OBJECTS) $(OBJECTS)
	@$(MAKE) -C $(LIBFT_DIR) clean --silent
	@$(MAKE) -C $(FTPRINTF_DIR) clean --silent

# Clean up all generated files
fclean: clean
	@rm -rf $(NAME) $(TEST_NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean --silent
	@$(MAKE) -C $(FTPRINTF_DIR) fclean --silent

# Rebuild the project
re: fclean all

.DEFAULT_GOAL := all
.PHONY: all clean fclean re norm normsrc normincludes test
