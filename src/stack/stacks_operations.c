/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:10:25 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 19:50:44 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

static void	ft_set_for_push(t_node **stack, t_node *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median)
				ft_ra(stack);
			else
				ft_rra(stack);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
				ft_rb(stack);
			else
				ft_rrb(stack);
		}
	}
}

void	ft_move_a_to_b(t_node **a, t_node **b)
{
	t_node	*cheapest_node;

	cheapest_node = ft_get_cheapest_node(*a);
	if (!cheapest_node)
		return ;
	if (cheapest_node->above_median && cheapest_node->target->above_median)
		ft_rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_median)
		&& !(cheapest_node->target->above_median))
		ft_rev_rotate_both(a, b, cheapest_node);
	ft_set_for_push(a, cheapest_node, 'a');
	ft_set_for_push(b, cheapest_node->target, 'b');
	ft_pb(a, b);
}

void	ft_move_b_to_a(t_node **a, t_node **b)
{
	ft_set_for_push(a, (*b)->target, 'a');
	ft_pa(a, b);
}

void	ft_min_on_top(t_node **a)
{
	t_node	*min_node;

	min_node = ft_get_min_node(*a);
	while ((*a)->value != min_node->value)
	{
		if (min_node->above_median)
			ft_ra(a);
		else
			ft_rra(a);
	}
}
