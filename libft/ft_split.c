/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 10:49:49 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/18 13:24:28 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long	count_words(char const *s, char c)
{
	unsigned long	count;
	int				i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static unsigned long	count_char(char const *s, char c, int pt)
{
	unsigned long	count;

	count = 0;
	while (s[pt])
	{
		if (s[pt] == c)
			break ;
		pt++;
		count++;
	}
	return (count);
}

static void	free_split(char **split, unsigned long i)
{
	while (i--)
		free(split[i]);
	free(split);
}

static int	alloc_check(char **split, unsigned long i)
{
	if (!split[i])
	{
		free_split(split, i);
		return (1);
	}
	else
		return (0);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned long	cs;
	unsigned long	cw;
	unsigned long	i;
	int				pos;

	cs = count_words(s, c);
	split = (char **)malloc((cs + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	pos = 0;
	i = 0;
	while (i < cs)
	{
		while (s[pos] == c)
			pos++;
		cw = count_char(s, c, pos);
		split[i] = (char *)malloc(cw + 1);
		if (alloc_check(split, i))
			return (NULL);
		ft_strlcpy(split[i++], &s[pos], cw + 1);
		pos = pos + cw;
	}
	split[i] = NULL;
	return (split);
}
