/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 03:12:50 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/26 13:59:27 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	count_len(int n)
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

char	*itoa(int n, size_t len, char *ans)
{
	size_t	i;

	i = len;
	ans[i] = '\0';
	i--;
	if (n == 0)
	{
		ans[i] = '0';
		return (ans);
	}
	while (n > 0)
	{
		ans[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	printf("%d", 3);
	if (n < 0)
		ans[i] = '-';
	return (ans);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ans;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_len(n);
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	printf("%d", 2);
	return (itoa(n, len, ans));
}

#include <stdio.h>
int main(void)
{
	printf("%s", ft_itoa(-123));
}
