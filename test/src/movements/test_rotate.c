/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:15:29 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 16:01:59 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_movements.h"

int	ft_rotate_check(t_stack *a, int value_before)
{
	t_node	*last;

	last = a->top;
	while (last->next)
		last = last->next;
	if (last->value != value_before)
		return (1);
	return (0);
}

int	ft_test_ra(t_stack *a, t_stack *b)
{
	int		value_before;

	ft_printf(STACKS_BEFORE FT_RA "\n");
	ft_print_stacks(a, b);
	if (a->size >= 2)
		value_before = a->top->value;
	ft_ra(a);
	ft_printf(STACKS_AFTER FT_RA "\n");
	ft_print_stacks(a, b);
	if (a->size >= 2)
		return (ft_rotate_check(a, value_before));
	return (0);
}

int	ft_test_rb(t_stack *a, t_stack *b)
{
	int		value_before;

	ft_printf(STACKS_BEFORE FT_RB "\n");
	ft_print_stacks(a, b);
	if (b->size >= 2)
		value_before = b->top->value;
	ft_rb(b);
	ft_printf(STACKS_AFTER FT_RB "\n");
	ft_print_stacks(a, b);
	if (b->size >= 2)
		return (ft_rotate_check(b, value_before));
	return (0);
}

int	ft_test_rr(t_stack *a, t_stack *b)
{
	int		a_value_before;
	int		a_result;
	int		b_value_before;
	int		b_result;

	ft_printf(STACKS_BEFORE FT_RR "\n");
	ft_print_stacks(a, b);
	if (a->size >= 2)
		a_value_before = a->top->value;
	if (b->size >= 2)
		b_value_before = b->top->value;
	ft_rr(a, b);
	ft_printf(STACKS_AFTER FT_RR "\n");
	ft_print_stacks(a, b);
	a_result = 0;
	b_result = 0;
	if (a->size >= 2)
		a_result = ft_rotate_check(a, a_value_before);
	if (b->size >= 2)
		b_result = ft_rotate_check(b, b_value_before);
	if (a_result || b_result)
		return (1);
	return (0);
}

int	ft_test_rotate_operations(t_stack *a, t_stack *b)
{
	ft_pop_element(a);
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
