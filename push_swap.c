/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 16:35:47 by mlucka            #+#    #+#             */
/*   Updated: 2026/07/21 03:35:16 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;
	t_node	*current;
	char	**split;
	int		count;

	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		if (!split)
			return (1);
		count = count_split(split);
		if (!check_arguments(count, split))
		{
			write(2, "Error\n", 6);
			free_split(split);
			return (1);
		}
		build_stack(count, &stack, split);
		free_split(split);
	}
	else
	{
		if (!check_arguments(argc - 1, &argv[1]))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		build_stack(argc - 1, &stack, &argv[1]);
	}
	current = stack.head;
	while (current)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
	return (0);
}
