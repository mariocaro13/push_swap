/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:23:32 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 20:55:21 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_stacks.h"

void	ft_print_stacks(t_node *a, t_node *b)
{
	while (a || b)
	{
		if (a)
		{
			ft_printf("%d ", a->value);
			a = a->next;
		}
		else
			ft_printf("  ");
		if (b)
		{
			ft_printf("%d", b->value);
			b = b->next;
		}
		else
			ft_printf(" ");
		ft_printf("\n");
	}
	ft_printf("- -\n");
	ft_printf("a b\n------------------------------------------------\n\n");
}
