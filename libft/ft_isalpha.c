/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:22:06 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/18 13:41:45 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int main()
// {
//     char c;
//          c = 'a';
//     int j;
//     j = ft_isalpha(c);
//     if(j == 1)
//     {
//         printf("%c is an Alphabet\n", c);
//     }
//     else
//     {
//         printf("%c is not an Alphabet\n", c);
