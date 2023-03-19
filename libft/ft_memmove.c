/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:48:48 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 20:30:56 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *)malloc(sizeof(unsigned char) * num);
	while (i < num)
	{
		*(temp + i) = *((unsigned char *)src + i);
		i += 1;
	}
	i = 0;
	while (i < num)
	{
		*((unsigned char *)dest + i) = *((unsigned char *)temp + i);
		i += 1;
	}
	free(temp);
	return (dest);
}
