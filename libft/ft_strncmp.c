/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 22:51:14 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/18 23:10:45 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

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

#include <string.h>
#include <stdio.h>

// your implementation of ft_strncmp
int ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello, there!";
    size_t n = 12;

    // call ft_strncmp
    int result1 = ft_strncmp(str1, str2, n);

    // call strncmp
    int result2 = strncmp(str1, str2, n);

    // compare the return values
    if (result1 == result2)
	{
        printf("The return values of ft_strncmp() and strncmp() are the same: %d\n", result1);
		printf("%d\n", result1);
		printf("%d\n", result2);
	}
    else
	{
        printf("The return values of ft_strncmp() and strncmp() are different.\n");
		printf("%d\n", result1);
		printf("%d\n", result2);
	}
    return 0;
}

