/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:26:32 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/19 17:46:22 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

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
