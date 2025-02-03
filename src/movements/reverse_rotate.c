/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:24:16 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 16:31:24 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	ft_reverse_rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*last;
	t_node	*new_last;

	if (stack->size < 2)
		return ;
	first = stack->top;
	last = stack->top;
	while (last->next)
	{
		new_last = last;
		last = last->next;
	}
	new_last->next = NULL;
	last->next = first;
	stack->top = last;
}


void	ft_rra(t_stack *a)
{
	ft_printf(ROTATE_RRA);
	ft_reverse_rotate(a);
}

void	ft_rrb(t_stack *b)
{
	ft_printf(ROTATE_RRB);
	ft_reverse_rotate(b);
}

void	ft_rrr(t_stack *a, t_stack *b)
{
	ft_printf(ROTATE_RRR);
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
}
