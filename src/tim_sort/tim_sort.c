/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tim_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:44:15 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/04 12:47:15 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tim_sort.h"

void	ft_tim_sort(t_stack *a, t_stack *b)
{
	int	size;
	int	current_size;
	int	left_start;
	int	mid;
	int	right_end;

	size = a->size;
	left_start = 0;
	while (left_start < size)
	{
		ft_insertion_sort(a, RUN);
		left_start += RUN;
	}
	current_size = RUN;
	while (current_size < size)
	{
		left_start = 0;
		while (left_start < size)
		{
			mid = left_start + current_size - 1;
			right_end = left_start + (2 * current_size) - 1;
			if (right_end >= size)
				right_end = size - 1;
			if (mid < right_end)
				ft_merge(a, b, current_size, right_end - mid);
			left_start += 2 * current_size;
		}
		current_size = 2 * current_size;
	}
}
