/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:36:13 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/29 13:42:56 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

/**
*  ___ _   _  ____ _    _   _ ____  _____ ____  
* |_ _| \ | |/ ___| |  | | | |  _ \| ____/ ___| 
*  | ||  \| | |   | |  | | | | | | |  _| \___ \ 
*  | || |\  | |___| |__| |_| | |_| | |___ ___) |
* |___|_| \_|\____|_____\___/|____/|_____|____/ 
*
*/

# include "hash_tables.h"

/**
*  _______   ______  _____ ____  _____ _____ ____  
* |_   _\ \ / /  _ \| ____|  _ \| ____|  ___/ ___| 
*   | |  \ V /| |_) |  _| | | | |  _| | |_  \___ \ 
*   | |   | | |  __/| |___| |_| | |___|  _|  ___) |
*   |_|   |_| |_|   |_____|____/|_____|_|   |____/ 
*/

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

/**
*  ____  ____   ___ _____ ___ _______   ______  _____ ____  
* |  _ \|  _ \ / _ \_   _/ _ \_   _\ \ / /  _ \| ____/ ___| 
* | |_) | |_) | | | || || | | || |  \ V /| |_) |  _| \___ \ 
* |  __/|  _ <| |_| || || |_| || |   | | |  __/| |___ ___) |
* |_|   |_| \_\\___/ |_| \___/ |_|   |_| |_|   |_____|____/ 
*
*/

t_stack	*ft_init_stack(void);

void	ft_push_element(t_stack *stack, int value);

int		ft_pop_element(t_stack *stack);

void	ft_free_stack(t_stack *stack);

#endif
