/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:06:02 by pissrith          #+#    #+#             */
/*   Updated: 2023/09/13 00:47:43 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*tim;

	if (!s1)
		return (NULL);
	if (!set || s1[0] == '\0')
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && (ft_strchr(set, s1[start])))
		start++;
	while (s1[end] && (ft_strchr(set, s1[end])))
		end--;
	tim = ft_substr(s1, start, end - start + 1);
	return (tim);
}
