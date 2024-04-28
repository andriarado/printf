/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:34:34 by randriat          #+#    #+#             */
/*   Updated: 2024/03/19 06:30:10 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr(long n);
int		ft_putstr(char *s);
char	*ft_strchr(char *s, int c);
int		ft_strlen(char *s);
int		ft_check_format(va_list args, char format);
int		ft_puthexa(unsigned long n, char format);
int		ft_putunsigned(unsigned long n);
int		ft_putaddress(void *n);
#endif
