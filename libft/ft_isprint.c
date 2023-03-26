/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:56:09 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/17 20:00:05 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(int c)
{	
	if ((31 < c && c < 127))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%d", ft_isprint(-1));
	printf("%d", isprint(-1));

}*/
