/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:41:47 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/04 18:55:17 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*ft_init_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}

void	ft_push_element(t_stack *stack, int value)
{
	t_node	*node;

	node = ft_create_node(value);
	if (!node)
		return ;
	node->next = stack->top;
	stack->top = node;
	stack->size++;
}

int	ft_pop_element(t_stack *stack)
{
	t_node	*node;
	int		value;

	if (stack->size == 0)
		return (-1);
	node = stack->top;
	value = node->value;
	stack->top = stack->top->next;
	free(node);
	stack->size--;
	return (value);
}

void	ft_free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	current = stack->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(stack);
}

void	ft_add_arr_to_stack(int arrc, char **arrv, t_stack *a)
{
	int		index;

	index = arrc - 1;
	while (index > 0)
	{
		ft_push_element(a, ft_atoi(arrv[index]));
		index--;
	}
}
