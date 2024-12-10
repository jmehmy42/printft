/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy < jmehmy@student.42lisboa.com >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:46:13 by jmehmy            #+#    #+#             */
/*   Updated: 2024/12/09 18:46:32 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_checker(const char **format, va_list arg)
{
	int	len;

	len = 0;
	if (**format == '\0')
		return (len);
	else if (**format == '%')
		len += ft_print_char('%');
	else if (**format == 'c')
		len += ft_print_char(va_arg(arg, int));
	else if (**format == 's')
		len += ft_print_string(va_arg(arg, char *));
	else if (**format == 'd' || **format == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (**format == 'u')
		len += ft_unsigned(va_arg(arg, unsigned int));
	else if (**format == 'x' || **format == 'X')
		len += ft_hexadacimal(va_arg(arg, unsigned int), **format);
	else if (**format == 'p')
		len += ft_pointer(va_arg(arg, void *));
	else
	{
		write(1, *format, 1);
		len++;
	}
	return (len);
}

static void	ft_putspace(const char **format, int *len)
{
	if(**format == ' ')
	{
		write(1, " ", 1);
		(*len)++;
	}
	while (**format == ' ')
		(*format)++;
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	arg;

	len = 0;
	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			len++;
		}
		else
		{
			format++;
			ft_putspace(&format, &len);
			len += ft_printf_checker(&format, arg);
		}
		format++;
	}
	va_end(arg);
	return (len);
}
