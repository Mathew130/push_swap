/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 00:40:57 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/18 11:02:29 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*current;
	void	*new_content;

	current = NULL;
	if (!lst)
		return (NULL);
	else
	{
		while (lst)
		{
			new_content = f(lst->content);
			new = ft_lstnew(new_content);
			if (new == NULL)
			{
				del(new_content);
				ft_lstclear(&current, (*del));
				return (NULL);
			}
			ft_lstadd_back(&current, new);
			lst = lst->next;
		}
	}
	return (current);
}
