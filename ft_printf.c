/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:07:19 by asyeo             #+#    #+#             */
/*   Updated: 2026/01/15 14:49:16 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1), 1);
	if (c == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	if (c == 'p')
		return (ft_putptr_pf(va_arg(args, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_pf((long)va_arg(args, int)));
	if (c == 'u')
		return (ft_putunbr_pf((unsigned long)va_arg(args, int)));
	if (c == 'x')
		return (ft_puthex_pf(va_arg(args, unsigned int), HEX_LOW));
	if (c == 'X')
		return (ft_puthex_pf(va_arg(args, unsigned int), HEX_UP));
	if (c == '%')
		return (write(1, "%", 1));
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			format[i++];
			count += ft_format(args, format[i]);
		}
		else
			count += write(1, format, 1);
		format[i++];
	}
	va_end(args);
	return (count);
}
