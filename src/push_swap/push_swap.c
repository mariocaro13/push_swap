/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:46:50 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/04 18:56:41 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stacks(t_stack *a, t_stack *b)
{
	t_node	*current_a;
	t_node	*current_b;

	current_a = a->top;
	current_b = b->top;
	while (current_a || current_b)
	{
		if (current_a)
		{
			ft_printf("%d ", current_a->value);
			current_a = current_a->next;
		}
		else
			ft_printf("- ");
		if (current_b)
		{
			ft_printf("%d", current_b->value);
			current_b = current_b->next;
		}
		else
			ft_printf("-");
		ft_printf("\n");
	}
	ft_printf("- -\n");
	ft_printf("a b\n------------------------------------------------\n\n");
}

int	push_swap(int arrc, char **arrv)
{
	t_node	**set;
	t_stack	*a;
	t_stack	*b;

	if (arrc < 2)
		return (0);
	if (!ft_validate(arrv, arrc, &set))
	{
		ft_printf("%s", ERROR);
		return (1);
	}
	a = NULL;
	a = ft_init_stack();
	if (!a)
	{
		ft_printf("%s", ERROR);
		ft_free_resources(set, arrc, NULL);
		return (1);
	}
	ft_add_arr_to_stack(arrc, arrv, a);
	ft_free_resources(set, arrc, NULL);
	b = NULL;
	b = ft_init_stack();
	//ft_sort(a, b);
	ft_printf("Sortered:\n");
	ft_print_stacks(a, b);
	ft_free_stack(a);
	ft_free_stack(b);
	return (0);
}
