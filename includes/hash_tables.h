/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_tables.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:02:40 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/31 16:08:24 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASH_TABLES_H
# define HASH_TABLES_H

/**
*  ___ _   _  ____ _    _   _ ____  _____ ____  
* |_ _| \ | |/ ___| |  | | | |  _ \| ____/ ___| 
*  | ||  \| | |   | |  | | | | | | |  _| \___ \ 
*  | || |\  | |___| |__| |_| | |_| | |___ ___) |
* |___|_| \_|\____|_____\___/|____/|_____|____/ 
*
*/

# include <stdlib.h>
# include <limits.h>
# include "libft.h"

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
 *  - next: Pointer to the next node.
 *
 * Description:
 *  This structure represents a node in the hash table.
 *  Each node contains an integer value and a pointer to the next node.
 */
typedef struct s_node
{
	int				value;
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
t_node			*ft_create_node(int value);

/** ft_hash:
 *  - Calculates the hash index for a given value.
 *
 * Params:
 *  @param value: Value for which to calculate the index.
 *  @param table_size: Size of the hash table.
 *
 * Description:
 *  This function calculates the hash index for a given value and size.
 * 	It ensures that the index is within the valid range.
 * 
 *  It first finds the modulus of the value and normalizes it.
 *	The formula used is:
 *  ((value % table_size + table_size) % table_size).
 * 
 * 	This ensures that even if the value is negative,
 * 	the index will be in teh range: [0, table_size - 1]
 * 
 * Example:
 *  Given value = -11 and table_size = 10,
 *  The steps are:
 *  1. value % table_size -> -11 % 10 = -1
 *  2. (value % table_size + table_size) -> -1 + 10 = 9
 *  3. ((value % table_size + table_size) % table_size) -> 9 % 10 = 9
 *
 * Example usage:
 *  unsigned int index = ft_hash(value, table_size);
 *
 * Return:
 *  The calculated hash index.
 */
unsigned int	ft_hash(int value, int table_size);

/** ft_insert_into_set:
 *  - Inserts a value into the hash table.
 *
 * Params:
 *  @param set: Pointer to the hash table.
 *  @param table_size: Size of the hash table.
 *  @param value: Value to be inserted.
 *
 * Description:
 *  This function inserts a value into the hash table at the appropriate index.
 *  It ensures that there are no duplicate values.
 *
 * Example usage:
 *  if (ft_insert_into_set(set, table_size, value))
 *      // Value inserted successfully
 *
 * Return:
 *  1 if the value is inserted successfully,
 *  0 if the value already exists or memory allocation fails.
 */
int				ft_insert_into_set(t_node **set, int table_size, int value);

/** ft_free_set:
 *  - Frees memory allocated for the hash table.
 *
 * Params:
 *  @param set: Pointer to the hash table.
 *  @param size: Size of the hash table.
 *
 * Description:
 *  This function frees the memory allocated for the hash table.
 *  It iterates through each index and releases the memory for each node.
 *
 * Example usage:
 *  ft_free_set(set, size);
 *
 * Return:
 *  This function does not return a value.
 */
void			ft_free_set(t_node **set, int size);

#endif
