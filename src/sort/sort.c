/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:55:37 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 19:53:29 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_sort_three(t_node **a)
{
	t_node	*biggest_node;

	biggest_node = ft_get_max_node(*a);
	if (biggest_node == *a)
		ft_ra(a);
	else if ((*a)->next == biggest_node)
		ft_rra(a);
	if ((*a)->value > (*a)->next->value)
		ft_sa(a);
}

void	ft_sort_stacks(t_node **a, t_node **b)
{
	int	len_a;

	if (!a || !b)
		return ;
	len_a = ft_stack_len(*a);
	if (len_a-- > 3 && !is_stack_sorted(*a))
		ft_pb(a, b);
	if (len_a-- > 3 && !is_stack_sorted(*a))
		ft_pb(a, b);
	while (len_a-- > 3 && !is_stack_sorted(*a))
	{
		ft_init_nodes_a(*a, *b);
		ft_move_a_to_b(a, b);
	}
	ft_sort_three(a);
	while (*b)
	{
		ft_init_nodes_b(*a, *b);
		ft_move_b_to_a(a, b);
	}
	ft_set_current_index(*a);
	ft_min_on_top(a);
}
