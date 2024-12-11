/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy < jmehmy@student.42lisboa.com >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:36:11 by jmehmy            #+#    #+#             */
/*   Updated: 2024/12/11 15:22:26 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_conversion(uintptr_t num, char format)
{
	int	count;

	count = 0;
	if (num >= 16)
	{
		count += ft_hex_conversion(num / 16, format);
		count += ft_hex_conversion(num % 16, format);
	}
	else
	{
		if (num <= 9)
			count += ft_print_char(num + '0');
		else
		{
			if (format == 'x' || format == 'p')
				count += ft_print_char(num - 10 + 'a');
			else if (format == 'X')
				count += ft_print_char(num - 10 + 'A');
		}
	}
	return (count);
}
