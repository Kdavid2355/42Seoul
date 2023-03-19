/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:53:25 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 10:54:05 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		*str = (unsigned char)value;
		str++;
		i += 1;
	}
	return (ptr);
}

void	*ft_bzero(void *s, size_t n)
{
	return (ft_memset(s, 0, n));
}
