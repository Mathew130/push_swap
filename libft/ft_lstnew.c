/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 00:22:40 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/18 20:51:56 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*current;

	current = (t_list *)malloc(sizeof(struct s_list));
	if (current == NULL)
		return (NULL);
	current->content = content;
	current->next = NULL;
	return (current);
}
