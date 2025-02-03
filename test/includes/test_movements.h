/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_movements.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:42:21 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 16:57:47 by mcaro-ro         ###   ########.fr       */
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
# define FT_SA			"ft_sa: "
# define FT_SB			"ft_sb: "
# define FT_SS			"ft_ss: "
# define SWAP_FAILED	"Swap operation failed.\n"
// Push Messages
# define TEST_PUSH "TEST: PUSH\n"
# define FT_PA			"ft_pa: "
# define FT_PB			"ft_pb: "
# define PUSH_FAILED	"Push operation failed.\n"
// Rotate Messages
# define TEST_ROTATE "TEST: ROTATE\n"
# define FT_RA			"ft_ra: "
# define FT_RB			"ft_rb: "
# define FT_RR			"ft_rr: "
# define ROTATE_FAILED	"Rotate operation failed.\n"
// Reverse Rotate Messages
# define TEST_REVERSE_ROTATE 	"TEST: REVERSE ROTATE\n"
# define FT_RRA					"ft_rra: "
# define FT_RRB					"ft_rrb: "
# define FT_RRR					"ft_rrr: "
# define REVERSE_ROTATE_FAILED	"Reverse Rotate operation failed.\n"
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
 *  after each operation. If any operation fails, returns 1
 *  and prints an appropriate error message.
 *
 * Example usage:
 *  int result = ft_test_push_operations(a, b);
 *  if (result != 0) {
 *      // Handle error
 *  }
 *
 * Return:
 *  0 if the test passed,
 *  1 if the test failed.
 */
int	ft_test_push_operations(t_stack *a, t_stack *b);

/** ft_test_rotate_operations:
 *  - Performs a series of rotate operations for testing purposes.
 *
 * Params:
 *  @param a: Double pointer to stack a.
 *  @param b: Double pointer to stack b.
 *
 * Description:
 *  This function performs a series of rotate operations,
 *  including ra, rb and rr, and verifies the state of the stacks
 *  after each operation. If any operation fails, returns 1
 *  and prints an appropriate error message.
 *
 * Example usage:
 *  int result = ft_test_rotate_operations(a, b);
 *  if (result != 0) {
 *      // Handle error
 *  }
 *
 * Return:
 *  0 if the test passed,
 *  1 if the test failed.
 */
int	ft_test_rotate_operations(t_stack *a, t_stack *b);

/** ft_test_reverse_rotate_operations:
 *  - Performs a series of reverse rotate operations for testing purposes.
 *
 * Params:
 *  @param a: Double pointer to stack a.
 *  @param b: Double pointer to stack b.
 *
 * Description:
 *  This function performs a series of reverse rotate operations,
 *  including rra, rrb and rrr, and verifies the state of the stacks
 *  after each operation. If any operation fails, returns 1
 *  and prints an appropriate error message.
 *
 * Example usage:
 *  int result = ft_test_rotate_operations(a, b);
 *  if (result != 0) {
 *      // Handle error
 *  }
 *
 * Return:
 *  0 if the test passed,
 *  1 if the test failed.
 */
int	ft_test_reverse_rotate_operations(t_stack *a, t_stack *b);

#endif
