/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:05:27 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/28 20:48:15 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate.h"

int	ft_validate_inputs(int argc, char **argv)
{
	int	*aux;
	int	i;

	aux = (int *)malloc((argc - 1) * sizeof(int));
	if (!aux)
		return (0);
	i = 1;
	while (i < argc)
	{
		if (!ft_is_integer(argv[i]))
		{
			free(aux);
			return (0);
		}
		aux[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	if (ft_has_duplicates(aux, argc - 1))
	{
		free(aux);
		return (0);
	}
	free(aux);
	return (1);
}

int	ft_is_integer(const char *str)
{
	if (!str || *str == '\0')
		return (0);
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_has_duplicates(int *arr, int size)
{
	int	i;
	int	j;

	if (size < 2)
		return (0);
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
