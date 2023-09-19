/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:04:41 by pisitchaisr       #+#    #+#             */
/*   Updated: 2023/09/11 17:13:46 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ddst;
	unsigned char	*ssrc;
	size_t			i;

	i = 0;
	ddst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
		while (len-- > 0)
			ddst[len] = ssrc[len];
	else
		ft_memcpy(ddst, ssrc, len);
	return ((char *)dst);
}
