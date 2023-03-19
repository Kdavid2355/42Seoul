/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:50:13 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 20:30:33 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int value, size_t num)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)p;
	value = (unsigned char)value;
	while (num--)
	{
		if (*ptr == value)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
