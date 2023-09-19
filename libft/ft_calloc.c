/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:47:58 by pissrith          #+#    #+#             */
/*   Updated: 2023/09/13 18:59:18 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*check;
	size_t	max;

	max = -1;
	if ((size != 0 && count > max / size) || (count * size > INT_MAX))
		return (NULL);
	check = malloc(count * size);
	if (!check)
		return (NULL);
	ft_bzero(check, count * size);
	return (check);
}
