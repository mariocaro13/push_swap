/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:05:27 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/04 17:39:09 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate.h"

int	ft_is_integer(const char *str)
{
	long	num;
	int		sign;

	if (!str || *str == '\0')
		return (0);
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	num = 0;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		num = num * 10 + (*str - '0');
		if ((sign == 1 && num > INT_MAX) || (sign == -1 && (-num) < INT_MIN))
			return (0);
		str++;
	}
	return (1);
}

int	ft_validate(char **arr, int size, t_node ***set)
{
	int	num;
	int	index;

	*set = (t_node **)ft_calloc(size, sizeof(t_node *));
	if (!*set)
		return (0);
	index = 1;
	while (index < size)
	{
		if (!arr[index] || !*arr[index] || !ft_is_integer(arr[index]))
		{
			ft_free_resources(*set, size, NULL);
			return (0);
		}
		num = ft_atoi(arr[index]);
		if (!ft_insert_into_set(*set, size, num))
		{
			ft_free_resources(*set, size, NULL);
			return (0);
		}
		index++;
	}
	return (1);
}

void	ft_free_resources(t_node **set, int table_size, int *arr)
{
	ft_free_set(set, table_size);
	free(set);
	if (arr)
		free(arr);
}
