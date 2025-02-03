/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:19:53 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 13:47:18 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_movements.h"

int	ft_test_pa(t_stack *a, t_stack *b)
{
	int	b_top_before;

	b_top_before = b->top->value;
	ft_printf("%s", STACK_BEFORE_PA);
	ft_print_stacks(a, b);
	ft_pa(a, b);
	ft_printf("%s", STACK_AFTER_PA);
	ft_print_stacks(a, b);
	if (a->top->value != b_top_before)
		return (1);
	return (0);
}

int	ft_test_pb(t_stack *a, t_stack *b)
{
	int	a_top_before;

	a_top_before = a->top->value;
	ft_printf("%s", STACK_BEFORE_PB);
	ft_print_stacks(a, b);
	ft_pb(a, b);
	ft_printf("%s", STACK_AFTER_PB);
	ft_print_stacks(a, b);
	if (b->top->value != a_top_before)
		return (1);
	return (0);
}

int	ft_test_push_operations(t_stack *a, t_stack *b)
{
	ft_printf(YELLOW"%s"RESET_COLOR, TEST_PUSH);
	if (ft_test_pa(a, b) != 0)
	{
		ft_printf(RED TEST_FAILED PUSH_PA_FAILED RESET_COLOR);
		return (1);
	}
	if (ft_test_pb(a, b) != 0)
	{
		ft_printf(RED TEST_FAILED PUSH_PB_FAILED RESET_COLOR);
		return (1);
	}
	return (0);
}
