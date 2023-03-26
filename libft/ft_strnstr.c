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

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	tofind_len;
	size_t	str_len;
	size_t	i;
	size_t	j;

	if (*tofind == '\0')
		return ((char *)str);
	str_len = ft_strlen(str);
	tofind_len = ft_strlen(tofind);
	if (str_len < tofind_len)
		return (0);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < tofind_len)
		{
			if (str[i] == tofind[j] && i + tofind_len <= len)
				if (ft_strncmp(&str[i], &tofind[0], tofind_len) == 0)
					return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
