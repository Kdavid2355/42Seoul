/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:02:13 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/18 20:48:01 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t			i;
	unsigned char	*str;

	str = destination;
	i = 0;
	while (i < num)
	{
		*str = *((unsigned char *)source);
		str++;
		source++;
		i += 1;
	}
	return (destination);
}
