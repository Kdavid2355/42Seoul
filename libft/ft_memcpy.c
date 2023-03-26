/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:02:13 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 20:37:01 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	const unsigned char	*src;
	unsigned char		*dest;
	size_t				i;

	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	if (dest == src)
		return (dest);
	i = 0;
	while (i < num)
	{
		dest[i] = src[i];
		i += 1;
	}
	return (destination);
}
