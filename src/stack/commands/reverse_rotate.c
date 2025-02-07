/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:24:16 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 16:06:33 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	ft_reverse_rotate(t_node **stack)
{
	t_node	*old_top;
	t_node	*new_top;

	if (!(*stack) || !((*stack)->next))
		return ;
	old_top = *stack;
	new_top = ft_get_last_node(*stack);
	new_top->prev->next = NULL;
	new_top->next = old_top;
	new_top->prev = NULL;
	old_top->prev = new_top;
	*stack = new_top;
}

void	ft_rra(t_node **a)
{
	ft_printf(ROTATE_RRA);
	ft_reverse_rotate(a);
}

void	ft_rrb(t_node **b)
{
	ft_printf(ROTATE_RRB);
	ft_reverse_rotate(b);
}

void	ft_rrr(t_node **a, t_node **b)
{
	ft_printf(ROTATE_RRR);
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
}

void	ft_rev_rotate_both(t_node **a, t_node **b, t_node *cheapest)
{
	while (*b != cheapest->target && *a != cheapest)
		ft_rrr(a, b);
	ft_set_current_index(*a);
	ft_set_current_index(*b);
}
