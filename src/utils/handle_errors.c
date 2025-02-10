/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:07:34 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/10 20:25:14 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

bool	is_error_syntax(char *arr)
{
	if (!(ft_isdigit(*arr) || *arr == '+' || *arr == '-'))
		return (1);
	if ((*arr == '+' || *arr == '-') && !ft_isdigit(arr[1]))
		return (1);
	while (*++arr)
	{
		if (!ft_isdigit(*arr))
			return (1);
	}
	return (0);
}

bool	is_duplicate(t_node *a, int value)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->value == value)
			return (1);
		a = a->next;
	}
	return (0);
}

void	ft_free_stack(t_node **stack)
{
	t_node	*current;
	t_node	*aux;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		aux = current->next;
		free(current);
		current = aux;
	}
	*stack = NULL;
}

void	ft_free_errors(t_node **a, char **arrv, bool split_flag)
{
	if (a)
		ft_free_stack(a);
	if (split_flag)
		ft_free_arr(arrv);
	write(2, ERROR, 6);
	exit(1);
}

void	ft_free_arr(char **arrv)
{
	int	index;

	index = -1;
	if (NULL == arrv || NULL == *arrv)
		return ;
	while (arrv[index])
		free(arrv[index++]);
	free(arrv - 1);
}
