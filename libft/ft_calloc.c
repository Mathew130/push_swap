/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:26:07 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/09 17:06:30 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
// int	main(void)
// {
// 	int *arr;
// 	size_t i;

// 	arr = ft_calloc(5, sizeof(int));
// 	if(!arr)
// 	return (1);
// 	i = 0;
// 	while(i < 5)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	return(0);
// }