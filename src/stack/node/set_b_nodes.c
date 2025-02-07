/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_b_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:45:53 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 15:11:10 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_set_target_b(t_node *a, t_node *b)
{
	t_node	*current_a;
	t_node	*target_node;
	long	best_match_index;

	while (b)
	{
		best_match_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if ((current_a->value > b->value)
				&& (current_a->value < best_match_index))
			{
				best_match_index = current_a->value;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (best_match_index == LONG_MAX)
			b->target = ft_get_min_node(a);
		else
			b->target = target_node;
		b = b->next;
	}
}

void	ft_init_nodes_b(t_node *a, t_node *b)
{
	ft_set_current_index(a);
	ft_set_current_index(b);
	ft_set_target_b(a, b);
}
