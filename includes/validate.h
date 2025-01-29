/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:31:14 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/29 01:18:24 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATE_H
# define VALIDATE_H

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
# include "hash_tables.h"

/**
*  ____  ____   ___ _____ ___ _______   ______  _____ ____  
* |  _ \|  _ \ / _ \_   _/ _ \_   _\ \ / /  _ \| ____/ ___| 
* | |_) | |_) | | | || || | | || |  \ V /| |_) |  _| \___ \ 
* |  __/|  _ <| |_| || || |_| || |   | | |  __/| |___ ___) |
* |_|   |_| \_\\___/ |_| \___/ |_|   |_| |_|   |_____|____/ 
*
*/

/** ft_is_integer:
 *  - Checks if a string represents a valid integer.
 *
 * Params:
 *  @param str: String to be checked.
 *
 * Description:
 *  This function verifies if the given string represents
 *  a valid integer within the range of INT_MIN to INT_MAX.
 *
 * Example usage:
 *  if (ft_is_integer("1234"))
 *      // The string represents a valid integer
 *
 * Return:
 *  1 if the string represents a valid integer,
 *  0 otherwise.
 */
int		ft_is_integer(const char *str);

/** ft_validate_and_store:
 *  - Validates and stores values in a hash table.
 *
 * Params:
 *  @param arr: Array of command-line arguments.
 *  @param set: Double pointer to the hash table.
 *  @param table_size: Size of the hash table.
 *
 * Description:
 *  This function validates the given arguments and stores
 *  them in a hash table. It ensures that the arguments are valid integers
 *  and that there are no duplicate values.
 *
 * Example usage:
 *  if (ft_validate_and_store(argv, &set, table_size))
 *      // Values are valid and stored
 *
 * Return:
 *  1 if the values are validated and stored correctly,
 *  0 if an error occurs.
 */
int		ft_validate_and_store(char **arr, t_node ***set, int table_size);

/** ft_free_resources:
 *  - Frees resources allocated for the hash table and array.
 *
 * Params:
 *  @param set: Pointer to the hash table.
 *  @param table_size: Size of the hash table.
 *  @param arr: Array to be freed (optional).
 *
 * Description:
 *  This function frees the memory allocated for the hash table
 *  and optionally for an integer array.
 * 	It ensures that all allocated memory is properly released.
 *
 * Example usage:
 *  ft_free_resources(set, table_size, arr);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_free_resources(t_node **set, int table_size, int *arr);

/** ft_validate_inputs:
 *  - Validates inputs and stores values in a hash table.
 *
 * Params:
 *  @param arrc: Number of arguments.
 *  @param arrv: Array of arguments.
 *  @param set: Double pointer to the hash table.
 *
 * Description:
 *  This function validates that the arguments of an array are valid integers,
 * 	and stores them in a hash table.
 *  It also ensures that there are no duplicate values.
 *
 * Example usage:
 *  if (ft_validate_inputs(argc, argv, &set))
 *      // Proceed with valid inputs
 *
 * Return:
 *  1 if the inputs are valid and stored correctly,
 *  0 if an error occurs.
 */
int		ft_validate_inputs(int arrc, char **arrv, t_node ***set);

#endif
