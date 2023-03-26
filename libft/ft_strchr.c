/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:54:45 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 20:35:13 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	find;

	find = (unsigned char)c;
	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == find)
			return (ptr);
		ptr++;
	}
	if (find == 0)
		return (ptr);
	return (0);
}
