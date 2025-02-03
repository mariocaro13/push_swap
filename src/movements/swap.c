/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:14:06 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 14:10:46 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	ft_swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (stack->size < 2)
		return ;
	first = stack->top;
	second = first->next;
	first->next = second->next;
	second->next = first;
	stack->top = second;
}

void	ft_sa(t_stack *a)
{
	ft_printf(SWAP_SA);
	ft_swap(a);
}

void	ft_sb(t_stack *b)
{
	ft_printf(SWAP_SB);
	ft_swap(b);
}

void	ft_ss(t_stack *a, t_stack *b)
{
	ft_printf(SWAP_SS);
	ft_swap(a);
	ft_swap(b);
}
