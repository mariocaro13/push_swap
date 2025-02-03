/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_movements.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:42:21 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 13:43:10 by mcaro-ro         ###   ########.fr       */
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
# define RED			"\x1b[31m"
# define GREEN       	"\x1b[32m"
# define YELLOW			"\x1b[33m"
# define BLUE			"\x1b[34m"

// Swap Messages
# define TEST_SWAP "TEST: SWAP\n"
# define STACK_BEFORE_SA "Stack a before ft_sa: \n"
# define STACK_AFTER_SA "Stack a after ft_sa: \n"
# define STACK_BEFORE_SB "Stack a before ft_sb: \n"
# define STACK_AFTER_SB "Stack a after ft_sb: \n"
# define STACK_BEFORE_SS "Stack a before ft_ss: \n"
# define STACK_AFTER_SS "Stack a after ft_ss: \n"
# define SWAP_SA_FAILED "Swap sa operation failed.\n"
# define SWAP_SB_FAILED "Swap sb operation failed.\n"
# define SWAP_SS_FAILED "Swap ss operation failed.\n"
# define SWAP_FAILED "Swap operations failed.\n"
// Push Messages
# define TEST_PUSH "TEST: PUSH\n"
# define STACK_BEFORE_PA "Stack a before ft_pa: \n"
# define STACK_AFTER_PA "Stack a after ft_pa: \n"
# define STACK_BEFORE_PB "Stack a before ft_pb: \n"
# define STACK_AFTER_PB "Stack a after ft_pb: \n"
# define PUSH_PA_FAILED "Push pa operation failed.\n"
# define PUSH_PB_FAILED "Push pb operation failed.\n"
# define PUSH_FAILED "Push operations failed.\n"
// Failed Messages
# define TEST_FAILED "Test failed: "
// Failed Swap Messages
# define MOVEMENT_FAILED "Movement operation failed.\n"

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
 *  int result = ft_test_movement_operations(&a, &b);
 *  if (result != 0) {
 *      // Handle error
 *  }
 *
 * Return:
 *  0 if the test passed,
 *  1 if the test failed.
 */
int	ft_test_movement_operations(t_stack **a, t_stack **b);

/** ft_test_swap_operations:
 *  - Performs a series of swap operations for testing purposes.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *  @param b: Pointer to stack b.
 *
 * Description:
 *  This function performs a series of swap operations,
 *  including sa, sb, and ss, and verifies the state of the stacks
 *  after each operation.
 *
 * Example usage:
 *  int result = ft_test_swap_operations(a, b);
 *  if (result != 0) {
 *      // Handle error
 *  }
 *
 * Return:
 *  0 if the test passed,
 *  1 if the test failed.
 */
int	ft_test_swap_operations(t_stack *a, t_stack *b);

/** ft_test_push_operations:
 *  - Performs a series of push operations for testing purposes.
 *
 * Params:
 *  @param a: Double pointer to stack a.
 *  @param b: Double pointer to stack b.
 *
 * Description:
 *  This function performs a series of push operations,
 *  including pa and pb, and verifies the state of the stacks
 *  after each operation. If any operation fails, devuelve 1
 *  y prints an appropriate error message.
 *
 * Example usage:
 *  int result = ft_test_push_operations(&a, &b);
 *  if (result != 0) {
 *      // Handle error
 *  }
 *
 * Return:
 *  0 if the test passed,
 *  1 if the test failed.
 */
int	ft_test_push_operations(t_stack *a, t_stack *b);

#endif
