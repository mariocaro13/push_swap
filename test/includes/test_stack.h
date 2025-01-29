/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_stack.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:50:34 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/29 18:47:03 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_STACK_H
# define TEST_STACK_H

# include "push_swap.h"
# include "print_stacks.h"

# define RESET_COLOR	"\x1b[0m"
# define RED			"\x1b[31m"
# define GREEN       	"\x1b[32m"
# define YELLOW			"\x1b[33m"
# define BLUE			"\x1b[34m"

# define STACKS_INITIALIZED_SUCCESSFULLY "Stacks initialized successfully.\n"
# define ERROR_INITIALIZING_STACKS		"Error initializing stacks.\n"
# define STACK_A_AFTER_PUSHING_ELEMENTS	"Stack a after pushing elements:\n"
# define POPPED_ELEMENT					"Popped element: "
# define STACK_A_AFTER_POPPING_ELEMENT	"Stack a after popping an element:\n"
# define STACKS_FREED_SUCCESSFULLY		"Stacks freed successfully.\n"
# define ERROR_FREEING_STACKS			"Error freeing stacks.\n"

void	ft_test_stack_operations(t_stack **a, t_stack **b);

void	ft_test_stack_init(t_stack **a, t_stack **b);

void	ft_test_stack_push(t_stack *a, t_stack *b);

void	ft_test_stack_pop(t_stack *a, t_stack *b);

void	ft_test_free_stacks(t_stack *a, t_stack *b);

#endif
