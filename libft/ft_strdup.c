/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:08:03 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 20:41:43 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*array;
	int		i;

	array = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	if (array == NULL)
		return (NULL);
	while (*s)
	{
		*array = *s;
		array++;
		s++;
		i += 1;
	}
	*array = '\0';
	return (array - i);
}
