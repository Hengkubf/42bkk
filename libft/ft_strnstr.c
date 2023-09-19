/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:13:43 by pissrith          #+#    #+#             */
/*   Updated: 2023/09/13 00:47:44 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char	*src;
	unsigned char	*find;
	size_t			i;
	size_t			j;

	i = 0;
	src = (unsigned char *)haystack;
	find = (unsigned char *)needle;
	if (needle[i] == '\0')
		return ((char *)&src[i]);
	while (i < len && src[i] != '\0')
	{
		j = 0;
		while (src[i + j] == find[j] && find[j] != '\0' && i + j < len)
			j++;
		if (find[j] == '\0')
			return ((char *)&src[i]);
		i++;
	}
	return (0);
}
