/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:09:15 by pisitchaisr       #+#    #+#             */
/*   Updated: 2023/09/25 21:22:55 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

static	int	count_word(char const *s, char c)
{
	size_t	i;
	size_t	countword;

	i = ft_strlen(s);
	countword = 0;
	while (i)
	{
		if ((s[i] == c && s[i - 1] != c)
			|| (s[i - 1] != c && s[i] == '\0'))
			countword++;
		i--;
	}
	return (countword);
}

static	char	**ffree(char **sp)
{
	size_t	i;

	i = 0;
	while (sp[i])
	{
		free(sp[i]);
		i++;
	}
	free(sp);
	return (NULL);
}

static	char	**checkma(char **sp, size_t i, char const *s, char c)
{
	size_t	j;
	size_t	countword;

	j = 0;
	countword = 0;
	while (i < ft_strlen(s) && s[i] != '\0')
	{
		if (s[i] == c)
			j = 0;
		else if ((s[i] != c && s[i + 1] == c)
			|| (s[i] != c && s[i + 1] == '\0'))
		{
			j++;
			sp[countword] = ft_substr(s, i - j + 1, j);
			if (!sp[countword])
				return (ffree(sp));
			countword++;
		}
		else if (s[i] != c)
			j++;
		i++;
	}
	return (sp);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	size;

	if (!s)
		return (NULL);
	size = count_word(s, c);
	split = malloc((size + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[size] = NULL;
	split = checkma(split, 0, s, c);
	return (split);
}
