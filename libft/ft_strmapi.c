/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 03:17:40 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/26 12:45:37 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*ans;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	while (i < len)
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

/*
char add_one(unsigned int i, char c) {
    return c + i;
}
#include <stdio.h>

int main(void) {
    char *s = "hello world";
    char *result = ft_strmapi(s, &add_one);
    if (result == NULL) {
        printf("Error: ft_strmapi returned NULL\n");
        return 1;
    }
    printf("Original string: %s\n", s);
    printf("Transformed string: %s\n", result);
    free(result);
    return 0;
}*/
