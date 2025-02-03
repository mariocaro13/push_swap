/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_reverse_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:43:17 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 18:03:26 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_movements.h"

int	ft_get_last_value(t_stack *a)
{
	t_node	*last;

	last = a->top;
	while (last->next)
		last = last->next;
	return (last->value);
}

int	ft_test_rra(t_stack *a, t_stack *b)
{
	int	value;

	ft_printf(STACKS_BEFORE FT_RRA "\n");
	ft_print_stacks(a, b);
	if (a->size >= 2)
		value = ft_get_last_value(a);
	ft_rra(a);
	ft_printf(STACKS_AFTER FT_RRA "\n");
	ft_print_stacks(a, b);
	if (a->size >= 2 && a->top->value != value)
		return (1);
	return (0);
}

int	ft_test_rrb(t_stack *a, t_stack *b)
{
	int	value;

	ft_printf(STACKS_BEFORE FT_RRB "\n");
	ft_print_stacks(a, b);
	if (b->size >= 2)
		value = ft_get_last_value(b);
	ft_rrb(b);
	ft_printf(STACKS_AFTER FT_RRB "\n");
	ft_print_stacks(a, b);
	if (b->size >= 2 && b->top->value != value)
		return (1);
	return (0);
}

int	ft_test_rrr(t_stack *a, t_stack *b)
{
	int	a_value;
	int	b_value;

	ft_printf(STACKS_BEFORE FT_RRA "\n");
	ft_print_stacks(a, b);
	if (a->size >= 2)
		a_value = ft_get_last_value(a);
	if (b->size >= 2)
		b_value = ft_get_last_value(b);
	ft_rrr(a, b);
	ft_printf(STACKS_AFTER FT_RRA "\n");
	ft_print_stacks(a, b);
	if ((a->size >= 2 && a->top->value != a_value)
		|| (b->size >= 2 && b->top->value != b_value))
		return (1);
	return (0);
}

int	ft_test_reverse_rotate_operations(t_stack *a, t_stack *b)
{
	ft_printf(YELLOW TEST_REVERSE_ROTATE RESET_COLOR);
	if (ft_test_rra(a, b) != 0)
	{
		ft_printf(RED TEST_FAILED FT_RRA REVERSE_ROTATE_FAILED RESET_COLOR);
		return (1);
	}
	if (ft_test_rrb(a, b) != 0)
	{
		ft_printf(RED TEST_FAILED FT_RRB REVERSE_ROTATE_FAILED RESET_COLOR);
		return (1);
	}
	if (ft_test_rrr(a, b) != 0)
	{
		ft_printf(RED TEST_FAILED FT_RRR REVERSE_ROTATE_FAILED RESET_COLOR);
		return (1);
	}
	return (0);
}
