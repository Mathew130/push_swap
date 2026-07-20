/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 05:11:22 by mlucka            #+#    #+#             */
/*   Updated: 2026/07/20 21:04:14 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
	int				size;
}					t_stack;
int					check_arguments(int argc, char **argv);
int					is_number(char *str);

t_node				*create_node(int value);
void				build_stack(int argc, t_stack *stack, char **argv);
void				add_back(t_stack *stack, t_node *new_node);
int					check_duplicates(int argc, char **argv);

#endif