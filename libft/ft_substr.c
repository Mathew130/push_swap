/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:14:55 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/18 10:01:10 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t l)
{
	size_t	i;
	size_t	slength;
	size_t	alloc;
	char	*new;

	if (!s)
		return (NULL);
	slength = ft_strlen(s);
	if (start >= slength)
		return (ft_strdup(""));
	alloc = l;
	if (slength - start < l)
		alloc = slength - start;
	new = malloc(alloc + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < alloc)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
