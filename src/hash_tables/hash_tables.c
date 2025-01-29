/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_tables.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:01:57 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/29 01:22:15 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash_tables.h"

t_node	*ft_create_node(int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

unsigned int	ft_hash(int value, int table_size)
{
	return ((unsigned int)((value % table_size) + table_size) % table_size);
}

int	ft_insert_into_set(t_node **set, int table_size, int value)
{
	t_node			*node;
	unsigned int	index;

	index = ft_hash(value, table_size);
	node = set[index];
	while (node)
	{
		if (node->value == value)
			return (0);
		node = node->next;
	}
	node = ft_create_node(value);
	if (!node)
		return (0);
	node->next = set[index];
	set[index] = node;
	return (1);
}

void	ft_free_set(t_node **set, int size)
{
	t_node	*node;
	t_node	*aux;
	int		index;

	index = 0;
	while (index < size)
	{
		node = set[index];
		while (node)
		{
			aux = node;
			node = node->next;
			free(aux);
		}
		index++;
	}
}
