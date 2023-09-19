/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:41:28 by pissrith          #+#    #+#             */
/*   Updated: 2023/09/13 00:42:02 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(int a)
{
	size_t	i;

	i = 0;
	if (a == 0)
		return (1);
	if (a < 0)
	{
		a *= -1;
		i++;
	}
	while (a != 0)
	{
		a /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	size_t	len;

	len = count(n);
	itoa = ft_calloc(len + 1, sizeof(char));
	if (!itoa)
		return (NULL);
	if (n == 0)
		itoa[0] = '0';
	if (n < 0)
	{
		itoa[0] = '-';
		if (n == INT_MIN)
		{
			itoa[--len] = '8';
			n = n / 10;
		}
		n = -n;
	}
	while (len-- && n != 0)
	{
		itoa[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (itoa);
}
