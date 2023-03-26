/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:26:19 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 20:29:54 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\f' || c == '\r' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '-')
		sign *= -1;
	if (*s == '+' || *s == '-')
		s++;
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			res = res * 10 + (*s - '0');
		if (!(*s >= '0' && *s <= '9'))
			return (res * sign);
		s++;
	}
	return (res * sign);
}
