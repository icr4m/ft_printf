/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:03:37 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/22 18:32:37 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_r_type(char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	// if (c == 'u')
	// 	aa;
	// if (c == 'p')
	// 	aa;
	// 	if (c == 'x')
	// 		if (c == 'X')
	// 			if (c == '%')
	return (0);
}