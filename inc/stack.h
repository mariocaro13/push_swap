/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:36:13 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/07 18:35:51 by mcaro-ro         ###   ########.fr       */
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

# include <stdbool.h>
# include <limits.h>
# include "libft.h"
# include "node.h"
# include "movements.h"
# include "utils.h"

# define PLACE_HOLDER_MIN LONG_MIN
# define PLACE_HOLDER_MAX LONG_MAX

/**
*  ____  ____   ___ _____ ___ _______   ______  _____ ____  
* |  _ \|  _ \ / _ \_   _/ _ \_   _\ \ / /  _ \| ____/ ___| 
* | |_) | |_) | | | || || | | || |  \ V /| |_) |  _| \___ \ 
* |  __/|  _ <| |_| || || |_| || |   | | |  __/| |___ ___) |
* |_|   |_| \_\\___/ |_| \___/ |_|   |_| |_|   |_____|____/ 
*
*/

void	ft_init_stack(t_node **a, char **arrv, bool split_flag);

// Utils
bool	is_stack_sorted(t_node *a);
int		ft_stack_len(t_node *a);

// Setters
void	ft_set_current_index(t_node *stack);
void	ft_set_cheapest(t_node *stack);

// Getters
t_node	*ft_get_min_node(t_node *stack);
t_node	*ft_get_max_node(t_node *stack);
t_node	*ft_get_cheapest_node(t_node *stack);

// A node
void	ft_init_nodes_a(t_node *a, t_node *b);
void	ft_set_cost_analysis_a(t_node *a, t_node *b);
void	ft_set_target_a(t_node *a, t_node *b);
// B node
void	ft_init_nodes_b(t_node *a, t_node *b);
void	ft_set_target_b(t_node *a, t_node *b);

// Stacks operations
void	ft_move_a_to_b(t_node **a, t_node **b);
void	ft_move_b_to_a(t_node **a, t_node **b);
void	ft_min_on_top(t_node **a);

#endif
