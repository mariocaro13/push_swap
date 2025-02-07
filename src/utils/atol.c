/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atol.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:51:11 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 19:23:18 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static int	ft_isspace(char c)
{
	return ((c == ' ' || c == '\t' || c == '\n' || c == '\v'
			|| c == '\f' || c == '\r'));
}

int	ft_atol(const char *str)
{
	long	num;
	int		sign;
	int		index;

	num = 0;
	index = 0;
	sign = 1;
	while (str[index] && ft_isspace(str[index]))
		index++;
	if (str[index] == '+')
		index++;
	else if (str[index] == '-')
	{
		sign *= -1;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		num = num * 10 + str[index] - '0';
		index++;
	}
	return (num * sign);
}
