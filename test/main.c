/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:01:19 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/29 18:19:59 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "test_movements.h"
#include "test_stack.h"

int	main(void)
{
	t_stack	*a;
	t_stack	*b;

	ft_test_stack_operations(&a, &b);
	ft_test_stack_init(&a, &b);
	ft_test_stack_push(a, b);
	ft_test_movement_operations(&a, &b);
	ft_free_stack(a);
	ft_free_stack(b);
	return (0);
}
