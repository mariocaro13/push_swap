/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:27:17 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 14:09:22 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVEMENTS_H
# define MOVEMENTS_H

/**
*  ___ _   _  ____ _    _   _ ____  _____ ____  
* |_ _| \ | |/ ___| |  | | | |  _ \| ____/ ___| 
*  | ||  \| | |   | |  | | | | | | |  _| \___ \ 
*  | || |\  | |___| |__| |_| | |_| | |___ ___) |
* |___|_| \_|\____|_____\___/|____/|_____|____/ 
*
*/

# include "stack.h"
# include "ft_printf.h"

/**
*  ____  _____ _____ ___ _   _ _____ ____  
* |  _ \| ____|  ___|_ _| \ | | ____/ ___| 
* | | | |  _| | |_   | ||  \| |  _| \___ \ 
* | |_| | |___|  _|  | || |\  | |___ ___) |
* |____/|_____|_|   |___|_| \_|_____|____/ 
*
*/

// Swap Messages
# define SWAP_SA "sa\n"
# define SWAP_SB "sb\n"
# define SWAP_SS "ss\n"
// Push Messages
# define PUSH_PA "pa\n"
# define PUSH_PB "pb\n"
// Rotate Messages
# define ROTATE_RA "ra\n"
# define ROTATE_RB "rb\n"
# define ROTATE_RR "rr\n"

/**
*  ____  ____   ___ _____ ___ _______   ______  _____ ____  
* |  _ \|  _ \ / _ \_   _/ _ \_   _\ \ / /  _ \| ____/ ___| 
* | |_) | |_) | | | || || | | || |  \ V /| |_) |  _| \___ \ 
* |  __/|  _ <| |_| || || |_| || |   | | |  __/| |___ ___) |
* |_|   |_| \_\\___/ |_| \___/ |_|   |_| |_|   |_____|____/ 
*
*/

// SWAP

/** ft_swap:
 *  - Swaps the top two elements of a stack.
 *
 * Params:
 *  @param stack: Pointer to the stack.
 *
 * Description:
 *  This function swaps the top two elements of the stack.
 *  If the stack has less than two elements, the function does nothing.
 *
 * Example usage:
 *  ft_swap(stack);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_swap(t_stack *stack);

/** ft_sa:
 *  - Swaps the top two elements of stack a.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *
 * Description:
 *  This function swaps the top two elements of stack a
 *  by calling the ft_swap function.
 *
 * Example usage:
 *  ft_sa(a);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_sa(t_stack *a);

/** ft_sb:
 *  - Swaps the top two elements of stack b.
 *
 * Params:
 *  @param b: Pointer to stack b.
 *
 * Description:
 *  This function swaps the top two elements of stack b
 *  by calling the ft_swap function.
 *
 * Example usage:
 *  ft_sb(b);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_sb(t_stack *b);

/** ft_ss:
 *  - Swaps the top two elements of both stack a and stack b.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *  @param b: Pointer to stack b.
 *
 * Description:
 *  This function swaps the top two elements of both stack a and stack b
 *  by calling the ft_swap function for both stacks.
 *
 * Example usage:
 *  ft_ss(a, b);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_ss(t_stack *a, t_stack *b);

// PUSh

/** ft_push:
 *  - Pushes the top element of stack b onto stack a.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *  @param b: Pointer to stack b.
 *
 * Description:
 *  This function pushes the top element of stack b onto stack a.
 *  If stack b is empty, the function does nothing.
 *
 * Example usage:
 *  ft_push(a, b);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_push(t_stack *a, t_stack *b);

/** ft_pa:
 *  - Pushes the top element of stack b onto stack a by calling ft_push.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *  @param b: Pointer to stack b.
 *
 * Description:
 *  This function calls ft_push to push the top element of stack b onto stack a.
 *  If stack b is empty, the function does nothing.
 *
 * Example usage:
 *  ft_pa(a, b);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_pa(t_stack *a, t_stack *b);

/** ft_pb:
 *  - Pushes the top element of stack a onto stack b.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *  @param b: Pointer to stack b.
 *
 * Description:
 *  This function calls ft_push to push the top element of stack a onto stack b.
 *  If stack a is empty, the function does nothing.
 *
 * Example usage:
 *  ft_pb(a, b);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_pb(t_stack *a, t_stack *b);

// ROTATE

/** ft_rotate:
 *  - Rotates all elements of a stack up by one position.
 *	The first element becomes the last.
 *
 * Params:
 *  @param stack: Pointer to the stack.
 *
 * Description:
 *  This function rotates all elements of a stack up by one position.
 *  The first element becomes the last. If the stack has less than two elements,
 *  the function does nothing.
 *
 * Example usage:
 *  ft_rotate(stack);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_rotate(t_stack *stack);

/** ft_ra:
 *  - Rotates all elements of stack a up by one position.
 *	The first element becomes the last.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *
 * Description:
 *  This function rotates all elements of stack a up by one position.
 *  The first element becomes the last. If the stack has less than two elements,
 *  the function does nothing.
 *
 * Example usage:
 *  ft_ra(a);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_ra(t_stack *a);

/** ft_rb:
 *  - Rotates all elements of stack b up by one position.
 *	The first element becomes the last.
 *
 * Params:
 *  @param b: Pointer to stack b.
 *
 * Description:
 *  This function rotates all elements of stack b up by one position.
 *  The first element becomes the last. If the stack has less than two elements,
 *  the function does nothing.
 *
 * Example usage:
 *  ft_rb(b);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_rb(t_stack *b);

/** ft_rr:
 *  - Rotates all elements of both stack a and stack b up by one position.
 *	The first element becomes the last.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *  @param b: Pointer to stack b.
 *
 * Description:
 *  This function rotates all elements of both stack a and stack b up,
 * 	by one position. The first element becomes the last.
 *	If the stack has less than two elements,
 *  the function does nothing.
 *
 * Example usage:
 *  ft_rr(a, b);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_rr(t_stack *a, t_stack *b);

#endif
