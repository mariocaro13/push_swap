/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:56:25 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 14:06:40 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	ft_rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (stack->size < 2)
		return ;
	first = stack->top;
	last = stack->top;
	while (last->next)
		last = last->next;
	stack->top = first->next;
	last->next = first;
	first->next = NULL;
}

void	ft_ra(t_stack *a)
{
	ft_printf(ROTATE_RA);
	ft_rotate(a);
}

void	ft_rb(t_stack *b)
{
	ft_printf(ROTATE_RB);
	ft_rotate(b);
}

void	ft_rr(t_stack *a, t_stack *b)
{
	ft_printf(ROTATE_RR);
	ft_rotate(a);
	ft_rotate(b);
}
