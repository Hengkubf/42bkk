/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:20:18 by pissrith          #+#    #+#             */
/*   Updated: 2023/09/13 19:51:02 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ss;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	ss = malloc((len + 1) * sizeof(char));
	if (!ss)
		return (NULL);
	while (i < len)
	{
		ss[i] = f (i, s[i]);
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
