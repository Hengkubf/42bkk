/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:13:43 by pissrith          #+#    #+#             */
/*   Updated: 2023/09/05 23:47:25 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char	*src;
	unsigned char	*find;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	src = (unsigned char *)haystack;
	find = (unsigned char *)needle;
	if (len <= 0)
		return (0);
	while (i < len && src != find)
	{
		if (ft_strncmp(src[i], find, ft_strlen((char *)find)))
			return (&src[i]);
		i++;
	}
	printf("%zu",i);
	return (0);
}
int main (void)
{
	char haystack[] = "This is the way.";
	char needle[] = "the";
	ft_strnstr(haystack,needle,ft_strlen(haystack));
}
