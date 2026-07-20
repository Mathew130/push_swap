/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:21:52 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/09 13:21:58 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t l)
{
	size_t	i;
	size_t	j;

	if (n[0] == '\0')
		return ((char *)h);
	i = 0;
	while (h[i] && i < l)
	{
		j = 0;
		while (h[i + j] == n[j] && (i + j) < l && h[i + j])
		{
			j++;
		}
		if (n[j] == '\0')
			return ((char *)&h[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char *str;

//     str = ft_strnstr("hello world", "world", 11);
//     if(str)
//     {
//          printf("%s\n", str);
//     }
//     else
//     {
//     printf("not found");
//     }
//     return(0);

// }