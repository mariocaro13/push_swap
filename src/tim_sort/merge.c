/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:37:37 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/04 11:57:04 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tim_sort.h"

void	ft_merge(t_stack *a, t_stack *b, int left_size, int right_size)
{
	while (left_size > 0 && right_size > 0)
	{
		if (b->top->value < a->top->value)
		{
			ft_pa(a, b);
			right_size--;
		}
		else
		{
			ft_ra(a);
			left_size--;
		}
	}
	while (right_size > 0)
	{
		ft_pa(a, b);
		right_size--;
	}
	while (left_size > 0)
	{
		ft_ra(a);
		left_size--;
	}
}
