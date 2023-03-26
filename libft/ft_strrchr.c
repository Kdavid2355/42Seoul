/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:23:14 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 20:33:23 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	find;
	char	*str;

	find = (unsigned char)c;
	str = (char *)s;
	last = NULL;
	while (*str)
	{
		if (*str == find)
			last = str;
		str++;
	}
	if (find == '\0')
		return (str);
	return (last);
}
