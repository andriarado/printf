/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 09:12:11 by randriat          #+#    #+#             */
/*   Updated: 2024/03/19 06:28:19 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			i++;
			len += ft_check_format(args, str[i]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}

/*int	main(void)
{
	int	n;
	int	m;
	n = ft_printf("c: %c\n", 'r');
	m = printf("c: %c\n", 'r');
	printf("%d - %d\n",n, m);
	n = ft_printf("s: %s\n", "hello");
	m = printf("s: %s\n", "hello");
	printf("%d - %d\n",n, m);
	n = ft_printf("p: %p\n", &n);
	m = printf("p: %p\n", &n);
	printf("%d - %d\n",n, m);
	n = ft_printf("d: %d\n", 42);
	m = printf("d: %d\n", 42);
	printf("%d - %d\n",n, m);
	n = ft_printf("i: %i\n", 42);
	m = printf("i: %i\n", 42);
	printf("%d - %d\n",n, m);
	n = ft_printf("u: %u\n", -42);
	m = printf("u: %u\n", -42);
	printf("%d - %d\n",n, m);
	n = ft_printf("x: %x\n", 242);
	m = printf("x: %x\n", 242);
	printf("%d - %d\n",n, m);
	n = ft_printf("X: %X\n", 242);
	m = ft_printf("X: %X\n", 242);
	printf("%d - %d\n", n, m);
}*/
