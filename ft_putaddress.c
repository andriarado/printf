/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:13:42 by randriat          #+#    #+#             */
/*   Updated: 2024/03/19 07:11:38 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_address(unsigned long n)
{
	int		len;
	char	*base;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += ft_address(n / 16);
	len += ft_putchar(*(base + (n % 16)));
	return (len);
}

int	ft_putaddress(void *ptr)
{
	unsigned long	n;
	int				len;

	len = 0;
	n = (unsigned long)ptr;
	len = ft_putstr("0x");
	len += ft_address(n);
	return (len);
}
