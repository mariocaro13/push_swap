/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:46:50 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/10 19:28:06 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "print_stacks.h"

int	push_swap(int arrc, char **arrv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (arrc == 1)
		return (1);
	else if (arrc == 2)
		arrv = ft_split_cursor(arrv[1], ' ');
	ft_init_stack(&a, arrv + 1, (arrc == 2));
	if (!is_stack_sorted(a))
	{
		if (ft_stack_len(a) == 2)
			ft_sa(&a);
		else if (ft_stack_len(a) == 3)
			ft_sort_three(&a);
		else
			ft_sort_stacks(&a, &b);
	}
	ft_free_stack(&a);
	return (0);
}
