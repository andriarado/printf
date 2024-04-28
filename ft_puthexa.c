/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 09:33:52 by randriat          #+#    #+#             */
/*   Updated: 2024/03/19 07:12:11 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char format)
{
	char			*base;
	int				len;
	unsigned int	nb;

	nb = (unsigned int)n;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	len = 0;
	if (nb >= 16)
		len += ft_puthexa(nb / 16, format);
	len += ft_putchar(*(base + (nb % 16)));
	return (len);
}
