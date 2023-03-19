/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:08:03 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 18:25:39 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		cnt += 1;
		s++;
	}
	return (cnt);
}

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
