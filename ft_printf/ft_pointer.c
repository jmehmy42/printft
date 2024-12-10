/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy < jmehmy@student.42lisboa.com >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:17:48 by jmehmy            #+#    #+#             */
/*   Updated: 2024/12/07 14:23:34 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t num)
{
	char	c;
	int		total;

	total = 0;
	if (num >= 16)
	{
		total += ft_putptr(num / 16);
		total += ft_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			c = num + '0';
		else
			c = num - 10 + 'a';
		total += write(1, &c, 1);
	}
	return (total);
}

int	ft_pointer(void *ptr)
{
	uintptr_t	num;
	int			count;

	count = 0;
	num = (uintptr_t)ptr;
	if (num == 0)
		count += write(1, "(nil)", 5);
	else
	{
		count += write(1, "0x", 2);
		count += ft_putptr(num);
	}
	return (count);
}
