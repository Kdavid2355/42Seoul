/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:46:55 by beomjuki          #+#    #+#             */
/*   Updated: 2023/07/03 15:48:15 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		len;

	len = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		len += ft_putchar(*str);
		str++;
	}
	return (len);
}
