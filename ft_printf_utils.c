/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:03:37 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/23 16:03:56 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_r_type(char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (c == 'p')
	{
		return (ft_putstr("0x") + ft_putnbr_base((long)va_arg(arg, void *),
				HEXA_lower));
	}
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	if (c == 'u')
		return (ft_print_nb(va_arg(arg, int)));
	if (c == 'x')
		return (ft_putnbr_base((unsigned int)(va_arg(arg, int)), HEXA_lower));
	if (c == 'X')
		return (ft_putnbr_base((unsigned int)(va_arg(arg, int)), HEXA_upper));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
