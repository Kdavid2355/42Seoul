/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:17:03 by beomjuki          #+#    #+#             */
/*   Updated: 2023/07/03 16:53:41 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_type(va_list ap, char *format)
{
	unsigned long long	p;
	int					result;

	result = 0;
	if (*format == 'c')
		result += ft_putchar(va_arg(ap, int));
	else if (*format == 's')
		result += ft_putstr(va_arg(ap, char *));
	else if (*format == 'd' || *format == 'i')
		result += ft_itoa(va_arg(ap, int));
	else if (*format == 'u')
		result += ft_uitoa(va_arg(ap, int));
	else if (*format == 'x' || *format == 'X')
		result += ft_puthex(va_arg(ap, int), *format);
	else if (*format == '%')
		result += ft_putchar('%');
	else if (*format == 'p')
	{
		p = va_arg(ap, unsigned long long);
		if (p == 0)
			result += ft_putstr("0x0");
		else
			result += (ft_putstr("0x") + ft_putpointer(p));
	}	
	return (result);
}

int	ft_parse_options(va_list ap, char *format)
{
	int		result;

	result = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!(*format))
				break ;
			result += ft_parse_type(ap, format);
		}
		else
			result += ft_putchar(*format);
		format++;
	}
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		result;

	result = 0;
	if (!format)
		return (0);
	va_start(ap, format);
	result += ft_parse_options(ap, (char *)format);
	va_end(ap);
	return (result);
}
/*
int	main(void)
{
	printf("%c \n", 'a');
	printf("%s \n", "abc");
	printf("%p \n", (void *)42);
	printf("%d %i \n", 42, 42);
	printf("%u \n", 42);
	printf("%x %X \n", 42, 42);
	printf("%% \n\n");

	ft_printf("%c \n", 'a');
	ft_printf("%s \n", "abc");
	ft_printf("%p \n", (void *)42);
	ft_printf("%d %i \n", 42, 42);
	ft_printf("%u \n", 42);
	ft_printf("%x %X \n", 42, 42);
	ft_printf("%% \n");
	return 0;
}*/
