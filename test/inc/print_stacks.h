/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:01:19 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 20:52:39 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_STACKS_H
# define PRINT_STACKS_H

/**
*  ___ _   _  ____ _    _   _ ____  _____ ____  
* |_ _| \ | |/ ___| |  | | | |  _ \| ____/ ___| 
*  | ||  \| | |   | |  | | | | | | |  _| \___ \ 
*  | || |\  | |___| |__| |_| | |_| | |___ ___) |
* |___|_| \_|\____|_____\___/|____/|_____|____/ 
*
*/

# include "push_swap.h"

/**
*  ____  _____ _____ ___ _   _ _____ ____  
* |  _ \| ____|  ___|_ _| \ | | ____/ ___| 
* | | | |  _| | |_   | ||  \| |  _| \___ \ 
* | |_| | |___|  _|  | || |\  | |___ ___) |
* |____/|_____|_|   |___|_| \_|_____|____/ 
*
*/

// Messages
# define STACKS_BEFORE	"Stacks before "
# define STACKS_AFTER	"Stacks after "

/**
*  ____  ____   ___ _____ ___ _______   ______  _____ ____  
* |  _ \|  _ \ / _ \_   _/ _ \_   _\ \ / /  _ \| ____/ ___| 
* | |_) | |_) | | | || || | | || |  \ V /| |_) |  _| \___ \ 
* |  __/|  _ <| |_| || || |_| || |   | | |  __/| |___ ___) |
* |_|   |_| \_\\___/ |_| \___/ |_|   |_| |_|   |_____|____/ 
*
*/

/** ft_print_stacks:
 *  - Prints the current state of stacks a and b.
 *
 * Params:
 *  @param a: Pointer to stack a.
 *  @param b: Pointer to stack b.
 *
 * Description:
 *  This function iterates through both stacks and prints their values.
 *  It uses "-" to denote empty positions in the stacks and prints 
 *  a visual separator at the end for clarity.
 *
 * Example usage:
 *  ft_print_stacks(a, b);
 *
 * Return:
 *  This function does not return a value.
 */
void	ft_print_stacks(t_node *a, t_node *b);

#endif
