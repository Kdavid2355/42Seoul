/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 22:24:24 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 20:40:24 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t detsize)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;
	size_t	j;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if ((detsize < dst_size) || (detsize == 0))
		return (detsize + src_size);
	else
	{
		i = 0;
		while (dst[i] != '\0')
			i++;
		j = 0;
		while ((src[j] != '\0') && ((dst_size + j + 1) < detsize))
		{
			*(dst + i) = *(src + j);
			i++;
			j++;
		}
		*(dst + i) = '\0';
		return (dst_size + src_size);
	}
}
