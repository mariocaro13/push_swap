/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:09:05 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 14:07:13 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	ft_push(t_stack *a, t_stack *b)
{
	int	value;

	if (b->size == 0)
		return ;
	value = ft_pop_element(b);
	ft_push_element(a, value);
}

void	ft_pa(t_stack *a, t_stack *b)
{
	ft_printf(PUSH_PA);
	ft_push(a, b);
}

void	ft_pb(t_stack *a, t_stack *b)
{
	ft_printf(PUSH_PB);
	ft_push(b, a);
}
