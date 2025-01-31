/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_movements.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:42:21 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/31 16:33:04 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_MOVEMENTS_H
# define TEST_MOVEMENTS_H

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
# define RE				"\x1b[31m"
# define GREEN       	"\x1b[32m"
# define YELLOW			"\x1b[33m"
# define BLUE			"\x1b[34m"

// Messages
# define TEST_SWAP "TEST: SWAP\n"
# define STACK_BEFORE "Stack a before ft_sa: \n"
# define STACK_AFTER "Stack a after ft_sa: \n"

/**
*  ____  ____   ___ _____ ___ _______   ______  _____ ____  
* |  _ \|  _ \ / _ \_   _/ _ \_   _\ \ / /  _ \| ____/ ___| 
* | |_) | |_) | | | || || | | || |  \ V /| |_) |  _| \___ \ 
* |  __/|  _ <| |_| || || |_| || |   | | |  __/| |___ ___) |
* |_|   |_| \_\\___/ |_| \___/ |_|   |_| |_|   |_____|____/ 
*
*/

/** ft_test_movement_operations:
 *  - Performs a series of movement operations for testing purposes.
 *
 * Params:
 *  @param a: Double pointer to stack a.
 *  @param b: Double pointer to stack b.
 *
 * Description:
 *  This function performs a series of movement operations,
 *  including swap operations, and verifies the state of the stacks
 *  after each operation.
 *
 * Example usage:
 *  ft_test_movement_operations(&a, &b);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_test_movement_operations(t_stack **a, t_stack **b);

/** ft_test_swap_operation:
 *  - Performs a swap operation on stack a and prints the state.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *  @param b: Pointer to stack b (used for printing).
 *
 * Description:
 *  This function performs a swap operation on stack a.
 *  It then prints the state of the stacks before and after the swap.
 *
 * Example usage:
 *  ft_test_swap_operation(a, b);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_test_swap_operation(t_stack *a, t_stack *b);

#endif
