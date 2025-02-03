/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_movements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:43:34 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/03 13:02:32 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_movements.h"

int	ft_test_movement_operations(t_stack **a, t_stack **b)
{
	if (ft_test_swap_operations(*a, *b) != 0)
	{
		ft_printf(RED TEST_FAILED SWAP_FAILED RESET_COLOR);
		return (1);
	}
	if (ft_test_push_operations(*a, *b) != 0)
	{
		ft_printf(RED TEST_FAILED PUSH_FAILED RESET_COLOR);
		return (1);
	}
	return (0);
}
