/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:22:13 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/18 13:34:02 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int main()
// {
//     char c;
//          c = 'c';
//     int j;
//     j = ft_isalnum(c);
//     if(j == 1)
//     {
//        printf("%c is an alphabet or a digit\n ", c);
//     }
//     else
//     {
//         printf("%c is niether an alphabet nor a digit\n ", c);
//     }
// }