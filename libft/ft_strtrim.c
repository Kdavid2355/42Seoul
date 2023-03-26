/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:04:57 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/26 12:48:12 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_end(char const *s1, char const *set)
{
	char	*ptr;
	size_t	index;
	size_t	len;

	index = 0;
	ptr = (char *)s1;
	len = ft_strlen(s1) - 1;
	while (*ptr != '\0')
		ptr++;
	ptr--;
	while (*ptr != '\0')
	{
		if (ft_strchr(set, *ptr) != 0)
		{
			index++;
			ptr--;
		}
		else
			break ;
	}
	return (len - index);
}

int	find_start(char const *s1, char const *set)
{
	char	*ptr;
	size_t	index;

	index = 0;
	ptr = (char *)s1;
	while (*ptr != '\0')
	{
		if (ft_strchr(set, *ptr) != 0)
		{
			index++;
			ptr++;
		}
		else
			break ;
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first_index;
	size_t	last_index;
	size_t	len;
	char	*ans;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL || s1[0] == '\0')
		return (ft_strdup(s1));
	first_index = find_start(s1, set);
	last_index = find_end(s1, set);
	len = last_index - first_index + 1;
	ans = ft_substr(s1, first_index, len);
	return (ans);
}
