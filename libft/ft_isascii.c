/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:26:38 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/09 17:13:09 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main()
// {
//     int c = 65;
//     int j;
//     j = ft_isascii(c);
//     if(j == 1)
//     {
//         printf("%d is ascii\n", c);
//     }
//     else
//     {
//         printf("%d is not  ascii\n", c);
//     }
// }
