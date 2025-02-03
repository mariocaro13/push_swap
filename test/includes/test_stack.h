/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_stack.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:50:34 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 13:27:59 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_STACK_H
# define TEST_STACK_H

/**
*  ___ _   _  ____ _    _   _ ____  _____ ____  
* |_ _| \ | |/ ___| |  | | | |  _ \| ____/ ___| 
*  | ||  \| | |   | |  | | | | | | |  _| \___ \ 
*  | || |\  | |___| |__| |_| | |_| | |___ ___) |
* |___|_| \_|\____|_____\___/|____/|_____|____/ 
*
*/

# include "push_swap.h"
# include "print_stacks.h"

/**
*  ____  _____ _____ ___ _   _ _____ ____  
* |  _ \| ____|  ___|_ _| \ | | ____/ ___| 
* | | | |  _| | |_   | ||  \| |  _| \___ \ 
* | |_| | |___|  _|  | || |\  | |___ ___) |
* |____/|_____|_|   |___|_| \_|_____|____/ 
*
*/

// Colors
# define RESET_COLOR	"\x1b[0m"
# define RED			"\x1b[31m"
# define GREEN       	"\x1b[32m"
# define YELLOW			"\x1b[33m"
# define BLUE			"\x1b[34m"

// Initialize Messages
# define TEST_STACK_INITIALIZE 			"TEST: INITIALIZE STACK\n"
# define STACKS_INITIALIZED_SUCCESSFULLY "Stacks initialized successfully.\n"
# define ERROR_INITIALIZING_STACKS		"Error initializing stacks.\n"
// Push Messages
# define TEST_STACK_PUSH 				"TEST: PUSH ELEMENTS\n"
# define STACK_A_AFTER_PUSHING_ELEMENTS	"Stack a after pushing elements:\n"
// Pop Messages
# define TEST_STACK_POP 				"TEST: POP ELEMENT\n"
# define POPPED_ELEMENT					"Popped element: "
# define STACK_A_AFTER_POPPING_ELEMENT	"Stack a after popping an element:\n"
// Free Messages
# define TEST_STACK_FREE 				"TEST: FREE STACKS\n"
// Test output Messages
# define STACKS_FREED_SUCCESSFULLY		"Stacks freed successfully.\n"
# define ERROR_FREEING_STACKS			"Error freeing stacks.\n"
# define STACK_FAILED					"Stack operations failed.\n"

/**
*  ____  ____   ___ _____ ___ _______   ______  _____ ____  
* |  _ \|  _ \ / _ \_   _/ _ \_   _\ \ / /  _ \| ____/ ___| 
* | |_) | |_) | | | || || | | || |  \ V /| |_) |  _| \___ \ 
* |  __/|  _ <| |_| || || |_| || |   | | |  __/| |___ ___) |
* |_|   |_| \_\\___/ |_| \___/ |_|   |_| |_|   |_____|____/ 
*
*/

/** ft_test_stack_init:
 *  - Initializes stacks and verifies their state.
 *
 * Params:
 *  @param a: Double pointer to stack a.
 *  @param b: Double pointer to stack b.
 *
 * Description:
 *  This function initializes the stacks and verifies if they have been
 *  initialized successfully by checking if their top pointers are NULL.
 *  It then prints the state of the stacks.
 *
 * Example usage:
 *  int result = ft_test_stack_init(&a, &b);
 *  if (result != 0) {
 *      // Handle error
 *  }
 *
 * Return:
 *  0 if the initialization passed,
 *  1 if the initialization failed.
 */
int		ft_test_stack_init(t_stack **a, t_stack **b);

/** ft_test_stack_push:
 *  - Pushes elements onto stack a and prints the state.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *  @param b: Pointer to stack b (used for printing).
 *
 * Description:
 *  This function pushes elements 1, 2, and 3 onto stack a.
 *  It then prints the state of the stacks.
 *
 * Example usage:
 *  int result = ft_test_stack_push(a, b);
 *  if (result != 0) {
 *      // Handle error
 *  }
 *
 * Return:
 *  0 if the push operation passed,
 *  1 if the push operation failed.
 */
int		ft_test_stack_push(t_stack *a, t_stack *b);

/** ft_test_stack_pop:
 *  - Pops an element from stack a and prints the state.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *  @param b: Pointer to stack b (used for printing).
 *
 * Description:
 *  This function pops an element from stack a and prints the popped value.
 *  It then prints the state of the stacks.
 *
 * Example usage:
 *  ft_test_stack_pop(a, b);
 *
 * Return:
 *  This function no longer returns a value.
 */
void	ft_test_stack_pop(t_stack *a, t_stack *b);

/** ft_test_free_stacks:
 *  - Frees the stacks and verifies their state.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *  @param b: Pointer to stack b.
 *
 * Description:
 *  This function frees the stacks and sets the pointers to NULL.
 *  It then verifies if the stacks have been freed successfully.
 *
 * Example usage:
 *  ft_test_free_stacks(a, b);
 *
 * Return:
 *  This function no longer returns a value.
 */
void	ft_test_free_stacks(t_stack *a, t_stack *b);

/** ft_test_stack_operations:
 *  - Performs a series of stack operations for testing purposes.
 *
 * Params:
 *  @param a: Double pointer to stack a.
 *  @param b: Double pointer to stack b.
 *
 * Description:
 *  This function performs a series of stack operations, including
 *  initialization, pushing elements, popping an element, and freeing
 *  the stacks. It verifies the state of the stacks at each step.
 *
 * Example usage:
 *  int result = ft_test_stack_operations(&a, &b);
 *  if (result != 0) {
 *      // Handle error
 *  }
 *
 * Return:
 *  0 if the test passed,
 *  1 if the test failed.
 */
int		ft_test_stack_operations(t_stack **a, t_stack **b);

#endif
