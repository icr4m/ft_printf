/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:26:19 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/22 17:29:38 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_putstr(char *str)
{
	size_t	len;

	len = 0;
	while (*str != '\0')
	{
		len += ft_putchar(*str++);
	}
	return (len);
}

static size_t	print_nb(unsigned int n)
{
	size_t	len;

	len = 0;
	if (n >= 10)
		len += print_nb(n / 10);
	len += ft_putchar(n % 10 + '0');
	return (len);
}

size_t	ft_putnbr(int n)
{
	size_t			len;
	unsigned int	num;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (n == 0)
		len += ft_putchar('0');
	else
		len += print_nb(num);
	return (len);
}
