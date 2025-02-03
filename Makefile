# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/28 18:35:29 by mcaro-ro          #+#    #+#              #
#    Updated: 2025/02/03 14:14:55 by mcaro-ro         ###   ########.fr        #
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

# SRC DIRS
SRC_DIR = src
LIBFT_DIR = $(SRC_DIR)/libft
FTPRINTF_DIR = $(SRC_DIR)/ft_printf
PUSH_SWAP_DIR = $(SRC_DIR)/push_swap
HASH_TABLES_DIR = $(SRC_DIR)/hash_tables
MOVEMENTS_DIR = $(SRC_DIR)/movements
STACK_DIR = $(SRC_DIR)/stack
VALIDATE_DIR = $(SRC_DIR)/validate

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
INCLUDE_DIRS = -I$(INCLUDE_DIR) -I$(SRC_DIR) -I$(LIBFT_DIR) -I$(FTPRINTF_DIR)

# Source files and object files
SRC = $(SRC_DIR)/main.c					\
	$(PUSH_SWAP_DIR)/push_swap.c		\
	$(HASH_TABLES_DIR)/hash_tables.c	\
	$(VALIDATE_DIR)/validate.c			\
	$(STACK_DIR)/stack_operations.c		\
	$(MOVEMENTS_DIR)/swap.c				\
	$(MOVEMENTS_DIR)/push.c				\
	$(MOVEMENTS_DIR)/rotate.c
	
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
	@$(CC) $(CFLAGS) $(MAIN_OBJECTS) $(OBJECTS) $(LIBFT) $(FTPRINTF) -o $(NAME)
	@echo "$(GREEN)$(NAME): $(NAME) has been created successfully!$(RESET)"

# Default target to build the project
all: $(NAME)

# Clean up object files
clean:
	@rm -f $(OBJECTS) $(TEST_OBJECTS)
	@$(MAKE) -C $(LIBFT_DIR) clean --silent
	@$(MAKE) -C $(FTPRINTF_DIR) clean --silent

# Clean up all generated files
fclean: clean
	@rm -rf $(NAME) $(TEST_NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean --silent
	@$(MAKE) -C $(FTPRINTF_DIR) fclean --silent

# Rebuild the project
re: fclean all

# Run Norminette
norm: 
	norminette $(INCLUDE_DIR) $(SRC)

#  _____ _____ ____ _____ 
# |_   _| ____/ ___|_   _|
#   | | |  _| \___ \ | |  
#   | | | |___ ___) || |  
#   |_| |_____|____/ |_|  
#

TEST_NAME = push_swap_test
TEST_DIR = test
TEST_INCLUDES = $(TEST_DIR)/includes

TEST_SRC = $(TEST_DIR)/main.c						\
	$(PUSH_SWAP_DIR)/push_swap.c					\
	$(HASH_TABLES_DIR)/hash_tables.c				\
	$(VALIDATE_DIR)/validate.c						\
	$(STACK_DIR)/stack_operations.c					\
	$(MOVEMENTS_DIR)/swap.c							\
	$(MOVEMENTS_DIR)/push.c							\
	$(MOVEMENTS_DIR)/rotate.c						\
	$(TEST_DIR)/$(STACK_DIR)/print_stack.c			\
	$(TEST_DIR)/$(STACK_DIR)/test_stack.c			\
	$(TEST_DIR)/$(MOVEMENTS_DIR)/test_movements.c	\
	$(TEST_DIR)/$(MOVEMENTS_DIR)/test_swap.c		\
	$(TEST_DIR)/$(MOVEMENTS_DIR)/test_push.c		\
	$(TEST_DIR)/$(MOVEMENTS_DIR)/test_rotate.c		\


TEST_OBJECTS = $(TEST_SRC:.c=.o)

#Include dirs for testing
INCLUDE_DIRS = -I$(INCLUDE_DIR) -I$(SRC_DIR) -I$(LIBFT_DIR) -I$(FTPRINTF_DIR) -I$(TEST_INCLUDES)

test: $(TEST_NAME)

$(TEST_NAME): $(TEST_OBJECTS) $(LIBFT) $(FTPRINTF)
	@$(CC) $(CFLAGS) $(TEST_OBJECTS) $(LIBFT) $(FTPRINTF) -o $(TEST_NAME)
	@echo "$(GREEN)$(TEST_NAME): $(TEST_NAME) has been created successfully!$(RESET)"

.DEFAULT_GOAL := all
.PHONY: all clean fclean re norm normsrc normincludes test
