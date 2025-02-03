/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:01:19 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 16:18:16 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "test_movements.h"
#include "test_stack.h"

int	main(void)
{
	t_stack	*a;
	t_stack	*b;

	ft_test_stack_init(&a, &b);
	ft_push_element(a, 8);
	ft_push_element(a, 5);
	ft_push_element(a, 6);
	ft_push_element(a, 3);
	ft_push_element(a, 1);
	ft_push_element(a, 2);
	ft_print_stacks(a, b);
	ft_sa(a);
	ft_print_stacks(a, b);
	ft_pb(a, b);
	ft_pb(a, b);
	ft_pb(a, b);
	ft_print_stacks(a, b);
	ft_rr(a, b);
	ft_print_stacks(a, b);
	ft_rrr(a, b);
	ft_print_stacks(a, b);
	ft_sa(a);
	ft_print_stacks(a, b);
	ft_pa(a, b);
	ft_pa(a, b);
	ft_pa(a, b);
	ft_print_stacks(a, b);
	ft_test_free_stacks(a, b);

	if (ft_test_stack_operations(&a, &b) != 0)
	{
		ft_printf(RED STACK_FAILED STACK_FAILED RESET_COLOR);
		return (1);
	}
	ft_test_stack_init(&a, &b);
	ft_test_stack_push(a, b);
	if (ft_test_movement_operations(&a, &b) != 0)
	{
		ft_printf(RED MOVEMENT_FAILED RESET_COLOR);
		return (1);
	}
	ft_free_stack(a);
	ft_free_stack(b);
	return (0);
}
