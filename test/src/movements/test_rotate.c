/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:15:29 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 14:38:05 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_movements.h"

int	ft_test_ra(t_stack *a, t_stack *b)
{
	int	top_before;

	top_before = a->top->value;
	ft_printf(STACKS_BEFORE FT_RA "\n");
	ft_print_stacks(a, b);
	ft_ra(a);
	ft_printf(STACKS_AFTER FT_RA "\n");
	ft_print_stacks(a, b);
	if (a->top->next->next->next->value != top_before)
		return (1);
	return (0);
}

int	ft_test_rb(t_stack *a, t_stack *b)
{
	int	top_before;

	top_before = b->top->value;
	ft_printf(STACKS_BEFORE FT_RB "\n");
	ft_print_stacks(a, b);
	ft_rb(b);
	ft_printf(STACKS_AFTER FT_RB "\n");
	ft_print_stacks(a, b);
	if (b->top->next->next->next->value != top_before)
		return (1);
	return (0);
}

int	ft_test_rr(t_stack *a, t_stack *b)
{
	int	top_a_before;
	int	top_b_before;

	top_a_before = a->top->value;
	top_b_before = b->top->value;
	ft_printf(STACKS_BEFORE FT_RR "\n");
	ft_print_stacks(a, b);
	ft_rr(a, b);
	ft_printf(STACKS_AFTER FT_RR "\n");
	ft_print_stacks(a, b);
	if (a->top->next->next->next->value != top_a_before
		|| b->top->next->next->next->value != top_b_before)
		return (1);
	return (0);
}

int	ft_test_rotate_operations(t_stack *a, t_stack *b)
{
	ft_printf(YELLOW TEST_ROTATE RESET_COLOR);
	if (ft_test_ra(a, b) != 0)
	{
		ft_printf(RED TEST_FAILED FT_RA ROTATE_FAILED RESET_COLOR);
		return (1);
	}
	if (ft_test_rb(a, b) != 0)
	{
		ft_printf(RED TEST_FAILED FT_RB ROTATE_FAILED RESET_COLOR);
		return (1);
	}
	if (ft_test_rr(a, b) != 0)
	{
		ft_printf(RED TEST_FAILED FT_RR ROTATE_FAILED RESET_COLOR);
		return (1);
	}
	return (0);
}
