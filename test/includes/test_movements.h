/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_movements.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:42:21 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/29 18:43:52 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_MOVEMENTS_H
# define TEST_MOVEMENTS_H

# include "push_swap.h"
# include "print_stacks.h"

# define RESET_COLOR	"\x1b[0m"
# define RE				"\x1b[31m"
# define GREEN       	"\x1b[32m"
# define YELLOW			"\x1b[33m"
# define BLUE			"\x1b[34m"

# define TEST_SWAP "TEST: SWAP\n"
# define STACK_BEFORE "Stack a before ft_sa: \n"
# define STACK_AFTER "Stack a after ft_sa: \n"

void	ft_test_movement_operations(t_stack **a, t_stack **b);

void	ft_test_swap_operation(t_stack *a, t_stack *b);

#endif
