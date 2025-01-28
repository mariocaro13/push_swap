/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:31:14 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/28 21:23:55 by mcaro-ro         ###   ########.fr       */
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

/**
*  ____  ____   ___ _____ ___ _______   ______  _____ ____  
* |  _ \|  _ \ / _ \_   _/ _ \_   _\ \ / /  _ \| ____/ ___| 
* | |_) | |_) | | | || || | | || |  \ V /| |_) |  _| \___ \ 
* |  __/|  _ <| |_| || || |_| || |   | | |  __/| |___ ___) |
* |_|   |_| \_\\___/ |_| \___/ |_|   |_| |_|   |_____|____/ 
*
*/

/** ft_validate_inputs:
 *  - Validates the input arguments.
 *
 * Params:
 *  @argc: The number of command-line arguments.
 *  @argv: An array of command-line arguments.
 *
 * Description:
 *  This function validates the input arguments passed to the program. It checks 
 *  if the arguments are valid integers and if there are no duplicate integers.
 *  It returns 1 if the inputs are valid, and 0 otherwise.
 *
 * Example usage:
 *  int result = ft_validate_inputs(argc, argv);
 *  // result will be 1 if inputs are valid, 0 otherwise.
 *
 * Return:
 *  1 if inputs are valid, and 0 otherwise.
 */
int	ft_validate_inputs(int argc, char **argv);

/** ft_is_integer:
 * - Checks if the given string represents a valid integer.
 *
 * Params:
 *  @str: The string to be checked.
 *
 * Description:
 *  This function checks if the given string 'str' represents a valid integer.
 *  It returns 1 if the string is a valid integer, and 0 if it is not.
 *
 * Example usage:
 *  int result = ft_is_integer("123");
 *  // result will be 1 because "123" is a valid integer.
 *
 * Return:
 *  1 if the string is a valid integer, and 0 if it is not.
 */
int	ft_is_integer(const char *str);

/** ft_has_duplicates:
 *  - Checks for duplicate integers in an array.
 *
 * Params:
 *  @arr: The array to be checked.
 *  @size: The size of the array.
 *
 * Description:
 *  This function checks if the given array `arr` contains any duplicates.
 *  It returns 1 if there are duplicates, and 0 if there are none.
 *
 * Example usage:
 *  int result = ft_has_duplicates(arr, size);
 *  // result will be 1 if duplicates are found, 0 otherwise.
 *
 * Return:
 *  1 if duplicates are found, and 0 if none are found.
 */
int	ft_has_duplicates(int *arr, int size);

#endif
