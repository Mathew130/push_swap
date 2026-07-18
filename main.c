/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 02:09:25 by mlucka            #+#    #+#             */
/*   Updated: 2026/07/18 14:28:04 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int	check_arguments(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{   
		if (is_number(argv[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
// argc number of arguments,argv the arguments themselves
{
	if (check_arguments(argc, argv) == 0)

	{
		write(1, "error\n", 6);
		return (1);
	}
	else
	{  
	  int  i = 1;
	   while(i < argc)
	   {
		   write(1, argv[i], strlen(argv[i]));
		   write(1, "\n", 1);
	       i++;
	   }
	}
	return(0);
}
