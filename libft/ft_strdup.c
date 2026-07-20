/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 09:23:49 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/10 14:35:22 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	l;

	l = ft_strlen(s);
	new = malloc(sizeof(char) * (l + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s, l + 1);
	return (new);
}
// int	main(void)
// {
// 	char *name;
// 	char *new;

// 	name = "hello world";
// 	new = ft_strdup(name);

// 	printf("NEW:%s\n", new);
// 	printf("Name:%s\n", name);

// 	return (0);
// }