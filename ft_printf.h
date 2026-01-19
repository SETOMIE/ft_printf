/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:46:37 by asyeo             #+#    #+#             */
/*   Updated: 2026/01/19 15:43:50 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

# define HEX_UP "0123456789ABCDEF"
# define HEX_LOW "0123456789abcdef"
# define DECIMAL "0123456789"

/* ft_print.c */

int	ft_format(char c, va_list args);
int	ft_printf(const char *format, ...);

/* ft_printf_utils.c */

int	ft_putnbr_pf(long n);
int	ft_putstr_pf(char *s);
int	ft_putptr_pf(void *p);
int	ft_putunbr_pf(unsigned long n);
int	ft_puthex_pf(unsigned long n, char *base);

#endif