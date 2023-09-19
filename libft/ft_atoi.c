/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pissrith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:11:52 by pissrith          #+#    #+#             */
/*   Updated: 2023/09/19 19:40:08 by pissrith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char *str, size_t i)
{
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	return (i);
}

int	parse_sign(const char *str, size_t *index)
{
	int	sign;

	sign = 1;
	if (str[*index] == '+' || str[*index] == '-')
	{
		if (str[*index] == '-')
		{
			sign = -1;
		}
		(*index)++;
	}
	return (sign);
}

int	isoverflow(long long n)
{
	if (n > 0)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	tmp;
	long	sign;

	sign = 1;
	tmp = 0;
	i = ft_isspace(str, 0);
	sign = parse_sign(str, &i);
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] >= '0')
		{
			tmp = tmp * 10 + ((str[i]) - '0');
			i++;
			if (tmp < 0)
				return (isoverflow(sign));
		}
	}
	return (tmp * sign);
}
