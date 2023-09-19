/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:54:40 by pissrith          #+#    #+#             */
/*   Updated: 2023/09/12 22:22:37 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*check;

	i = ft_strlen(s1) + 1;
	check = malloc(i);
	if (!check)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		check[i] = s1[i];
		i++;
	}
	check[i] = '\0';
	return (check);
}
