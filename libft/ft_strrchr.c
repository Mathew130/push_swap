/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:22:09 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/10 09:12:07 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	char	*l;

	i = 0;
	l = NULL;
	while (1)
	{
		if (s[i] == (char)c)
		{
			l = &s[i];
		}
		if (s[i] == '\0')
		{
			break ;
		}
		i++;
	}
	return (l);
}
// int main()
// {
//       char *s = "hello world";
//     char *l;

//     l = ft_strrchr(s, 'o');
//     if(l)
//     {
//         printf("%s\n", l);
//     }
//     else
//     {
//         printf("not found\n");
//     }
// }