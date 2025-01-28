/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:46:50 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/28 20:42:19 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (!ft_validate_inputs(argc, argv))
	{
		ft_printf("%s", ERROR);
		return (1);
	}
	return (0);
}
