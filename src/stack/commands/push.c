/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:09:05 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 18:52:36 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	ft_push(t_node **dst, t_node **src)
{
	t_node	*node_to_push;

	if (!src || !dst)
		return ;
	node_to_push = *src;
	*src = node_to_push->next;
	if (*src)
		(*src)->prev = NULL;
	node_to_push->prev = NULL;
	if (!*dst)
	{
		node_to_push->next = NULL;
		*dst = node_to_push;
	}
	else
	{
		node_to_push->next = *dst;
		node_to_push->next->prev = node_to_push;
		*dst = node_to_push;
	}
}

void	ft_pa(t_node **a, t_node **b)
{
	ft_printf(PUSH_PA);
	ft_push(a, b);
}

void	ft_pb(t_node **a, t_node **b)
{
	ft_printf(PUSH_PB);
	ft_push(b, a);
}
