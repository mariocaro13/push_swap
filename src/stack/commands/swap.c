/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:32:19 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 18:29:30 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	ft_swap(t_node **stack)
{
	t_node	*old_top;
	t_node	*new_top;

	if (!(*stack) || !((*stack)->next) || ft_stack_len(*stack) == 1)
		return ;
	old_top = *stack;
	new_top = old_top->next;
	old_top->next = new_top->next;
	if (new_top->next)
		new_top->next->prev = old_top;
	new_top->next = old_top;
	new_top->prev = NULL;
	old_top->prev = new_top;
	*stack = new_top;
}

void	ft_sa(t_node **a)
{
	ft_printf(SWAP_SA);
	ft_swap(a);
}

void	ft_sb(t_node **b)
{
	ft_printf(SWAP_SB);
	ft_swap(b);
}

void	ft_ss(t_node **a, t_node **b)
{
	ft_printf(SWAP_SS);
	ft_swap(a);
	ft_swap(b);
}
