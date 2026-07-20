/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:20:35 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/10 14:36:35 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstl;
	size_t	srcl;
	size_t	i;

	dstl = 0;
	srcl = 0;
	i = 0;
	while (dst[dstl])
		dstl++;
	while (src[srcl])
		srcl++;
	if (size <= dstl)
		return (size + srcl);
	while (src[i] && (dstl + i < size - 1))
	{
		dst[dstl + i] = src[i];
		i++;
	}
	dst[dstl + i] = '\0';
	return (dstl + srcl);
}
// int	main(void)
// {
// 	char dst[20] = "hello";
// 	char src[] = "world";
// 	ft_strlcat(dst, src, sizeof(dst));
// 	printf("%s\n", dst);
// }