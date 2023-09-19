/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:08:32 by pissrith          #+#    #+#             */
/*   Updated: 2023/09/12 19:40:07 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	tmp = malloc(len_s1 + len_s2 + 1);
	if (!tmp)
		return (NULL);
	ft_strlcpy(tmp, s1, len_s1 + 1);
	ft_strlcat(tmp, s2, len_s1 + len_s2 + 1);
	return (tmp);
}
