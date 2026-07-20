/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:31:51 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/09 11:33:55 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
// int main()
// {
//     int c = '5';
//     int j;
//     j = ft_isprint(c);
//     if(j == 1)
//     {
//         printf("%c is a printable character\n", c);
//     }
//     else
//     {
//         printf("%c is not a printable character\n",c);
//     }
// }