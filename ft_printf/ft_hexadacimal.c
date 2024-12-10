/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadacimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy < jmehmy@student.42lisboa.com >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:13:57 by jmehmy            #+#    #+#             */
/*   Updated: 2024/12/07 15:01:34 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int num, char format)
{
	int		count;

	count = 0;
	if (num >= 16)
	{
		count += ft_puthexa(num / 16, format);
		count += ft_puthexa(num % 16, format);
	}
	else
	{
		if (num <= 9)
			count += ft_print_char(num + '0');
		else
		{
			if (format == 'x')
				count += ft_print_char(num - 10 + 'a');
			else if (format == 'X')
				count += ft_print_char(num - 10 + 'A');
		}
	}
	return (count);
}

int	ft_hexadacimal(unsigned int num, char format)
{
	int	count;

	count = 0;
	if (num == 0)
		count += write(1, "0", 1);
	else
		count += ft_puthexa(num, format);
	return (count);
}
