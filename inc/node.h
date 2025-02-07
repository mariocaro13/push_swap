/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:02:40 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 15:17:11 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_H
# define NODE_H

/**
*  ___ _   _  ____ _    _   _ ____  _____ ____  
* |_ _| \ | |/ ___| |  | | | |  _ \| ____/ ___| 
*  | ||  \| | |   | |  | | | | | | |  _| \___ \ 
*  | || |\  | |___| |__| |_| | |_| | |___ ___) |
* |___|_| \_|\____|_____\___/|____/|_____|____/ 
*
*/

# include <stdlib.h>
# include <stdbool.h>

/**
*  _______   ______  _____ ____  _____ _____ ____  
* |_   _\ \ / /  _ \| ____|  _ \| ____|  ___/ ___| 
*   | |  \ V /| |_) |  _| | | | |  _| | |_  \___ \ 
*   | |   | | |  __/| |___| |_| | |___|  _|  ___) |
*   |_|   |_| |_|   |_____|____/|_____|_|   |____/ 
*/

/** s_node:
 *  - Structure of a node in the hash table.
 * 
 * Fields:
 *  - value: Integer value stored in the node.
 * 	- index: Integer index in the stack.
 * 	- push_cost: Integer cost operation to sort the node.
 * 	- above_median: Bool to check if the value is above the median.
 * 	- cheapest: Bool to check if the node has the less push cost.
 * 	- target: Pointer to the node for push above.
 * 	- prev: Pointer to the previous node.
 *  - next: Pointer to the next node.
 *
 * Description:
 *  This structure represents a node in the stack.
 *  Each node contains an integer value, an integer index in the stack,
 * 	an integer push cost, a boolean above_median, a boolean cheapest,
 * 	a pointer to the target node, a pointer to the previous node,
 * 	and a pointer to the next node.
 */
typedef struct s_node
{
	int				value;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct s_node	*target;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

/**
*  ____  ____   ___ _____ ___ _______   ______  _____ ____  
* |  _ \|  _ \ / _ \_   _/ _ \_   _\ \ / /  _ \| ____/ ___| 
* | |_) | |_) | | | || || | | || |  \ V /| |_) |  _| \___ \ 
* |  __/|  _ <| |_| || || |_| || |   | | |  __/| |___ ___) |
* |_|   |_| \_\\___/ |_| \___/ |_|   |_| |_|   |_____|____/ 
*
*/

/** ft_create_node:
 *  - Creates a new node with the given value.
 *
 * Params:
 *  @param value: Integer value for the new node.
 *
 * Description:
 *  This function creates a new node with the specified value
 *  and initializes its pointers to NULL.
 *
 * Example usage:
 *  t_node *node = ft_create_node(value);
 *
 * Return:
 *  A pointer to the newly created node,
 *  or NULL if memory allocation fails.
 */
t_node	*ft_create_node(int value);

void	ft_append_node(t_node **stack, int value);

t_node	*ft_get_last_node(t_node *stack);

#endif
