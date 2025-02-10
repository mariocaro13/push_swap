/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_getters.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:41:47 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 22:23:50 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_init_stack(t_node **a, char **arrv, bool split_flag)
{
	long	num;
	int		index;

	index = 0;
	while (arrv[index])
	{
		if (is_error_syntax(arrv[index]))
			ft_free_errors(a, arrv, split_flag);
		num = ft_atol(arrv[index]);
		if (num > INT_MAX || num < INT_MIN)
			ft_free_errors(a, arrv, split_flag);
		if (is_duplicate(*a, (int)num))
			ft_free_errors(a, arrv, split_flag);
		ft_append_node(a, (int)num);
		index++;
	}
	if (split_flag)
		ft_free_arr(arrv);
}

t_node	*ft_get_min_node(t_node *stack)
{
	t_node	*min_node;
	long	min;

	if (!stack)
		return (NULL);
	min = LONG_MAX;
	while (stack)
	{
		if (stack->value < min)
		{
			min = stack->value;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

t_node	*ft_get_max_node(t_node *stack)
{
	t_node	*max_node;
	long	max;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

t_node	*ft_get_cheapest_node(t_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
