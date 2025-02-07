/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:56:25 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 16:05:24 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	ft_rotate(t_node **stack)
{
	t_node	*old_top;
	t_node	*new_top;
	t_node	*last;

	if (!(*stack) || !((*stack)->next))
		return ;
	old_top = *stack;
	new_top = old_top->next;
	last = ft_get_last_node(*stack);
	new_top->prev = NULL;
	last->next = old_top;
	old_top->prev = last;
	old_top->next = NULL;
	*stack = new_top;
}

void	ft_ra(t_node **a)
{
	ft_printf(ROTATE_RA);
	ft_rotate(a);
}

void	ft_rb(t_node **b)
{
	ft_printf(ROTATE_RB);
	ft_rotate(b);
}

void	ft_rr(t_node **a, t_node **b)
{
	ft_printf(ROTATE_RR);
	ft_rotate(a);
	ft_rotate(b);
}

void	ft_rotate_both(t_node **a, t_node **b, t_node *cheapest)
{
	while (*b != cheapest->target && *a != cheapest)
		ft_rr(a, b);
	ft_set_current_index(*a);
	ft_set_current_index(*b);
}
