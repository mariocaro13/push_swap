/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:36:13 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 16:01:29 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

/**
*  ___ _   _  ____ _    _   _ ____  _____ ____  
* |_ _| \ | |/ ___| |  | | | |  _ \| ____/ ___| 
*  | ||  \| | |   | |  | | | | | | |  _| \___ \ 
*  | || |\  | |___| |__| |_| | |_| | |___ ___) |
* |___|_| \_|\____|_____\___/|____/|_____|____/ 
*
*/

# include "hash_tables.h"

/**
*  _______   ______  _____ ____  _____ _____ ____  
* |_   _\ \ / /  _ \| ____|  _ \| ____|  ___/ ___| 
*   | |  \ V /| |_) |  _| | | | |  _| | |_  \___ \ 
*   | |   | | |  __/| |___| |_| | |___|  _|  ___) |
*   |_|   |_| |_|   |_____|____/|_____|_|   |____/ 
*/

/** t_stack:
 *  - Structure representing a stack.
 * 
 * Fields:
 *  - top: Pointer to the top node in the stack.
 *  - size: Integer representing the size of the stack.
 *
 * Description:
 *  This structure represents a stack, with a pointer to the top node
 *  and an integer representing the size of the stack.
 */
typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

/**
*  ____  ____   ___ _____ ___ _______   ______  _____ ____  
* |  _ \|  _ \ / _ \_   _/ _ \_   _\ \ / /  _ \| ____/ ___| 
* | |_) | |_) | | | || || | | || |  \ V /| |_) |  _| \___ \ 
* |  __/|  _ <| |_| || || |_| || |   | | |  __/| |___ ___) |
* |_|   |_| \_\\___/ |_| \___/ |_|   |_| |_|   |_____|____/ 
*
*/

/** ft_init_stack:
 *  - Initializes a new stack.
 *
 * Params:
 *  This function does not take any parameters.
 *
 * Description:
 *  This function initializes a new stack by allocating memory for
 *  the stack structure, setting the top pointer to NULL, and initializing
 *  the size to 0.
 *
 * Example usage:
 *  t_stack *stack = ft_init_stack();
 *
 * Return:
 *  A pointer to the newly initialized stack,
 *  or NULL if memory allocation fails.
 */
t_stack	*ft_init_stack(void);

/** ft_push_element:
 *  - Pushes an element onto the stack.
 *
 * Params:
 *  @param stack: Pointer to the stack.
 *  @param value: Integer value to be pushed onto the stack.
 *
 * Description:
 *  This function creates a new node with the given value and pushes
 *  it onto the top of the stack. It increments the size of the stack.
 *
 * Example usage:
 *  ft_push_element(stack, value);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_push_element(t_stack *stack, int value);

/** ft_pop_element:
 *  - Pops an element from the stack.
 *
 * Params:
 *  @param stack: Pointer to the stack.
 *
 * Description:
 *  This function pops an element from the top of the stack, frees the
 *  memory of the popped node, and decrements the size of the stack.
 *
 * Example usage:
 *  int value = ft_pop_element(stack);
 *
 * Return:
 *  The integer value of the popped element,
 *  or -1 if the stack is empty.
 */
int		ft_pop_element(t_stack *stack);

/** ft_free_stack:
 *  - Frees memory allocated for the stack.
 *
 * Params:
 *  @param stack: Pointer to the stack.
 *
 * Description:
 *  This function frees the memory allocated for all nodes in the stack,
 *  and then frees the memory allocated for the stack itself.
 *
 * Example usage:
 *  ft_free_stack(stack);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_free_stack(t_stack *stack);

#endif
