/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:54:51 by pisitchaisr       #+#    #+#             */
/*   Updated: 2023/09/11 15:24:14 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptrb;
	size_t			i;
	char			cc;

	i = 0;
	cc = (unsigned char)c;
	ptrb = (unsigned char *)b;
	while (i < len)
	{
		ptrb[i] = cc;
		i++;
	}
	return (b);
}
