/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:00:00 by pissrith          #+#    #+#             */
/*   Updated: 2023/09/05 16:34:40 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	cc;
	size_t	i;

	i = 0;
	cc = (char)c;
	ptr = (char *)s;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == cc)
			return (&ptr[i]);
		i++;
	}
	if (ptr[i] == cc)
		return (&ptr[i]);
	return (0);
}
