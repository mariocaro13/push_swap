/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:35:55 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/29 18:46:50 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_stack.h"

void	ft_test_stack_init(t_stack **a, t_stack **b)
{
	*a = ft_init_stack();
	*b = ft_init_stack();
	if (*a && *b && !(*a)->top && !(*b)->top)
		ft_printf(STACKS_INITIALIZED_SUCCESSFULLY);
	else
		ft_printf(RED ERROR_INITIALIZING_STACKS);
	ft_print_stacks(*a, *b);
}

void	ft_test_stack_push(t_stack *a, t_stack *b)
{
	ft_push_element(a, 1);
	ft_push_element(a, 2);
	ft_push_element(a, 3);
	ft_printf(STACK_A_AFTER_PUSHING_ELEMENTS);
	ft_print_stacks(a, b);
}

void	ft_test_stack_pop(t_stack *a, t_stack *b)
{
	int		value;

	value = ft_pop_element(a);
	ft_printf("%s%d\n", POPPED_ELEMENT, value);
	ft_printf(STACK_A_AFTER_POPPING_ELEMENT);
	ft_print_stacks(a, b);
}

void	ft_test_free_stacks(t_stack *a, t_stack *b)
{
	ft_free_stack(a);
	ft_free_stack(b);
	a = NULL;
	b = NULL;
	if (!a && !b)
		ft_printf(GREEN STACKS_FREED_SUCCESSFULLY);
	else
		ft_printf(ERROR_FREEING_STACKS);
	ft_printf("\n");
}

void	ft_test_stack_operations(t_stack **a, t_stack **b)
{
	ft_test_stack_init(a, b);
	ft_test_stack_push(*a, *b);
	ft_test_stack_pop(*a, *b);
	ft_test_free_stacks(*a, *b);
}
