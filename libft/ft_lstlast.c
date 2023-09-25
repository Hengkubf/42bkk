/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:59:17 by pissrith          #+#    #+#             */
/*   Updated: 2023/09/20 00:41:55 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	len;
	size_t	i;

	i = 1;
	len = ft_lstsize(lst);
	while (i < len)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
