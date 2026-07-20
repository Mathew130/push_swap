/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 16:35:47 by mlucka            #+#    #+#             */
/*   Updated: 2026/07/20 20:23:50 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;
	t_node	*current;

	// check disorder - call the disorder function
	// validate all the inputs - if its a number, if you have a char,
	// if you have a string, etc - errors?
	// argc number of arguments,array of strings or argv the arguments themselves
	// create the stack
	// fill the stack
	// print all operations / benchmode - print statistics
	if (check_arguments(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (check_duplicates(argc, argv) == 0)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	build_stack(argc, &stack, argv);
	current = stack.head;
	while (current != NULL)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
	return (0);
}