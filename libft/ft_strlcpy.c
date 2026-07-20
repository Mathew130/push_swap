/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:20:56 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/10 15:34:01 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srcl;

	i = 0;
	srcl = 0;
	while (src[srcl])
	{
		srcl++;
	}
	if (size == 0)
	{
		return (srcl);
	}
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srcl);
}
// int	main(void)
// {
// 	char src[] = "hello world";
// 	char dest[6];

// 	size_t l = ft_strlcpy(dest, src, 6);

// 	printf("dest = %s\n", dest);
// 	printf("srcl =  %zu\n", l);
// }