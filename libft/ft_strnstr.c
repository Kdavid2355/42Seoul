/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:26:32 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 20:42:33 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	str_len;
	size_t	tofind_len;
	size_t	i;
	size_t	j;

	if (!*tofind)
		return ((char *)str);
	str_len = ft_strlen(str);
	tofind_len = ft_strlen(tofind);
	if (len < tofind_len || str_len < tofind_len)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		j = 0;
		while (j < tofind_len)
		{
			if (str[i] == tofind[j])
				if (ft_strncmp(&str[i], &tofind[0], tofind_len) == 0)
					return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
