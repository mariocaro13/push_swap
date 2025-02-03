/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:46:59 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 13:33:36 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_movements.h"

int	ft_test_sa(t_stack *a, t_stack *b)
{
	int	top_before;
	int	next_before;

	top_before = a->top->value;
	next_before = a->top->next->value;
	ft_printf("%s", STACK_BEFORE_SA);
	ft_print_stacks(a, b);
	ft_sa(a);
	ft_printf("%s", STACK_AFTER_SA);
	ft_print_stacks(a, b);
	if (a->top->value != next_before || a->top->next->value != top_before)
		return (1);
	return (0);
}

int	ft_test_sb(t_stack *a, t_stack *b)
{
	int	top_before;
	int	next_before;

	top_before = b->top->value;
	next_before = b->top->next->value;
	ft_printf("%s", STACK_BEFORE_SB);
	ft_print_stacks(a, b);
	ft_sb(b);
	ft_printf("%s", STACK_AFTER_SB);
	ft_print_stacks(a, b);
	if (b->top->value != next_before || b->top->next->value != top_before)
		return (1);
	return (0);
}

int	ft_test_ss(t_stack *a, t_stack *b)
{
	int	a_top_before;
	int	a_next_before;
	int	b_top_before;
	int	b_next_before;

	a_top_before = a->top->value;
	a_next_before = a->top->next->value;
	b_top_before = b->top->value;
	b_next_before = b->top->next->value;
	ft_printf("%s", STACK_BEFORE_SS);
	ft_print_stacks(a, b);
	ft_ss(a, b);
	ft_printf("%s", STACK_AFTER_SS);
	ft_print_stacks(a, b);
	if (((a->top->value != a_next_before)
			|| (a->top->next->value != a_top_before))
		|| ((b->top->value != b_next_before)
			|| (b->top->next->value != b_top_before)))
		return (1);
	return (0);
}

int	ft_test_swap_operations(t_stack *a, t_stack *b)
{
	ft_printf(YELLOW"%s"RESET_COLOR, TEST_SWAP);
	if (ft_test_sa(a, b) != 0)
	{
		ft_printf(RED SWAP_SA_FAILED RESET_COLOR);
		return (1);
	}
	if (ft_test_sb(a, b) != 0)
	{
		ft_printf(RED SWAP_SB_FAILED RESET_COLOR);
		return (1);
	}
	if (ft_test_ss(a, b) != 0)
	{
		ft_printf(RED SWAP_SS_FAILED RESET_COLOR);
		return (1);
	}
	return (0);
}
