/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:17:03 by beomjuki          #+#    #+#             */
/*   Updated: 2023/04/23 18:22:14 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

int ft_putchar(char c)
{
	return write(1, &c, 1);
}

int ft_putstr(char *str)
{
	int len = 0;

	while (*str)
	{
		len += ft_putchar(*str);
		str++;
	}
	return (len);
}

int	ft_putptr(void *ptr)
{
	unsigned long long	addr;
	int					result;

	addr = (unsigned long long)ptr;
	result = ft_putstr("0x");
	if (!addr)
		result += ft_putchar('0');
	while (addr)
	{
		if (addr % 16 < 10)
			result += ft_putchar(addr % 16 + '0');
		else
			result += ft_putchar(addr % 16 - 10 + 'a');
		addr /= 16;
	}
	ft_putstr(" ");
	return (result);
}

int ft_parse_type(va_list ap, char *format)
{
	int result;

	result = 0;
	if (*format == 'c')
		result += ft_putchar(va_arg(ap, int));
	else if (*format == 's')
		result += ft_putstr(va_arg(ap, char *));
	else if (*format == 'p')
		result += ft_putptr(va_arg(ap, char *));
	else if (*format == 'd')
		result += ft_putstr(va_arg(ap, char *));
	else if (*format == 'i')
		result += ft_putstr(va_arg(ap, char *));
	else if (*format == 'u')
		result += ft_putstr(va_arg(ap, char *));
	else if (*format == 'x')
		result += ft_putstr(va_arg(ap, char *));
	else if (*format == 'X')
		result += ft_putstr(va_arg(ap, char *));
	else if (*format == '%')
		result += ft_putchar('%');
	return (result);
}


int ft_parse_options(va_list ap, char *format)
{
	int		result;

	result = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			//ft_parse_flag()
			//ft_parse_width()
			//ft_parse_precision()
			//ft_parse_length()
			result += ft_parse_type(ap, format);
		}
		else
			result += ft_putchar(*format);
		format++;
	}
	return (result);
}

int ft_printf(const char *format, ...)
{
	va_list	ap;
	int		result;

	va_start(ap, format);
	result = ft_parse_options(ap, (char *)format);
	va_end(ap);
	return (result);
}

int main(void)
{
	int num = 11;
	ft_printf("%c %s %p 안녕하세요 여러분 %% \n", 'a', "hello", &num);
	return (0);
}

