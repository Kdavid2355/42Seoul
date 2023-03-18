/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:11:34 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/17 20:21:02 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	unsigned char *str;
	
	str = (unsigned char *)ptr;
	
	i = 0;
	while(i < num)
	{
		*str = value;
		str++;
		i += 1;
	}
	return str;
}