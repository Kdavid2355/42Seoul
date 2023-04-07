/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 03:12:50 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/31 15:53:32 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ans;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_len(n);
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		ans[0] = '-';
		n *= -1;
		i++;
	}
	ans[len] = '\0';
	while (i < len)
	{
		ans[len-- - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (ans);
}
