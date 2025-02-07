/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_a_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:42:34 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 15:11:00 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_set_current_index(t_node *stack)
{
	int	index;
	int	median;

	index = 0;
	if (!stack)
		return ;
	median = ft_stack_len(stack) / 2;
	while (stack)
	{
		stack->index = index;
		if (index <= median)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		index++;
	}
}

void	ft_set_target_a(t_node *a, t_node *b)
{
	t_node	*current_b;
	t_node	*target_node;
	long	best_match_index;

	while (a)
	{
		best_match_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if ((current_b->value < a->value)
				&& (current_b->value > best_match_index))
			{
				best_match_index = current_b->value;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match_index == LONG_MIN)
			a->target = ft_get_max_node(b);
		else
			a->target = target_node;
		a = a->next;
	}
}

void	ft_set_cost_analysis_a(t_node *a, t_node *b)
{
	int	len_a;
	int	len_b;

	len_a = ft_stack_len(a);
	len_b = ft_stack_len(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!(a->above_median))
			a->push_cost = len_a - (a->index);
		if (a->target->above_median)
			a->push_cost += a->target->index;
		else
			a->push_cost += len_b - (a->target->index);
		a = a->next;
	}
}

void	ft_set_cheapest(t_node *stack)
{
	t_node	*cheapest_node;
	long	cheapest_value;

	if (!stack)
		return ;
	cheapest_value = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < cheapest_value)
		{
			cheapest_value = stack->push_cost;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
}

void	ft_init_nodes_a(t_node *a, t_node *b)
{
	ft_set_current_index(a);
	ft_set_current_index(b);
	ft_set_target_a(a, b);
	ft_set_cost_analysis_a(a, b);
	ft_set_cheapest(a);
}
