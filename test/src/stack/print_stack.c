/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:23:32 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/29 18:31:26 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_stack.h"

void	ft_print_stacks(t_stack *a, t_stack *b)
{
	t_node	*current_a;
	t_node	*current_b;

	current_a = a->top;
	current_b = b->top;
	while (current_a || current_b)
	{
		if (current_a)
		{
			ft_printf("%d ", current_a->value);
			current_a = current_a->next;
		}
		else
			ft_printf("- ");
		if (current_b)
		{
			ft_printf("%d", current_b->value);
			current_b = current_b->next;
		}
		else
			ft_printf("-");
		ft_printf("\n");
	}
	ft_printf("a b\n------------------------------------------------\n\n");
}
