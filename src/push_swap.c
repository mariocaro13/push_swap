/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:46:50 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/28 23:50:42 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int arrc, char **arrv)
{
	t_node	**set;

	if (arrc < 2)
		return (0);
	if (!ft_validate_inputs(arrc, arrv, &set))
	{
		ft_printf("%s", ERROR);
		return (1);
	}
	ft_free_resources(set, arrc, NULL);
	return (0);
}
