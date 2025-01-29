/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:46:59 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/29 18:44:37 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_movements.h"

void	ft_test_swap_operation(t_stack *a, t_stack *b)
{
	ft_printf(YELLOW"%s"RESET_COLOR, TEST_SWAP);
	ft_printf("%s", STACK_BEFORE);
	ft_print_stacks(a, b);
	ft_sa(a);
	ft_printf("%s", STACK_AFTER);
	ft_print_stacks(a, b);
}
