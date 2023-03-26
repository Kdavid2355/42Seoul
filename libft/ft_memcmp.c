/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:11:12 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 20:32:48 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sent1;
	unsigned char	*sent2;

	sent1 = (unsigned char *)s1;
	sent2 = (unsigned char *)s2;
	while (n && (*sent1 == *sent2))
	{
		sent1++;
		sent2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*sent1 - *sent2);
}
