/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:22:39 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/04 13:23:40 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tim_sort.h"

void	ft_insertion_sort(t_stack *a, int size)
{
	int	i;
	int	j;
	t_node	*current;
	t_node	*next;

	if (size < 2 || a->size < 2)
		return ;
	i = 0;
	while (i < size)
	{
		j = i;
		current = a->top;
		while (j > 0)
		{
			next = current->next;
			if (next && current->value > next->value)
			{
				ft_sa(a);
				ft_ra(a);
			}
			current = current->next;
			j--;
		}
		ft_ra(a);
		i++;
	}
	while (i > 0)
	{
		ft_rra(a);
		i--;
	}
}
