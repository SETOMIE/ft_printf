/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:04:06 by asyeo             #+#    #+#             */
/*   Updated: 2026/01/19 15:49:39 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *s)
{
	if (!s)
		return (write(1, "(null)", 6), 6);
	return (write(1, s, ft_strlen(s)));
}

int	ft_putnbr_pf(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i += write(1, "-", 1);
		n = -n;
	}
	return (i + ft_putunbr_pf((unsigned long)n));
}

int	ft_putunbr_pf(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_putunbr_pf(n / 10);
	i += write(1, &DECIMAL[n % 10], 1);
	return (i);
}

int	ft_putptr_pf(void *p)
{
	if (!p)
		return (ft_putstr_pf("(nil)"));
	return (ft_putstr_pf("0x") + ft_puthex_pf((unsigned long)p, HEX_LOW));
}

int	ft_puthex_pf(unsigned long n, char *base)
{
	char	buffer[32];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!n)
		return (write(1, "0", 1));
	while (n)
	{
		buffer[j++] = base[n % 16];
		n /= 16;
	}
	while (j--)
		i += write(1, &buffer[j], 1);
	return (i);
}
