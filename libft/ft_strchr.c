/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:20:16 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/09 23:54:26 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (unsigned char)c;
	while ((unsigned char)s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((unsigned char)s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
// int main ()
// {
//     char *s = "hello world";
//     char *p;

//     p = ft_strchr(s, 'w');
//     if(p)
//     {
//         printf("%s\n", p);
//     }
//     else
//     {
//         printf("not found\n");
//     }
// }