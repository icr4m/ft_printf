/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:41:49 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/22 11:12:20 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	size_t	count;
	va_list	arg;

	count = 0;
	va_start(arg, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str == 's')
				ft_putstr_fd(1, va_arg(arg, char *));
			str++;
		}
		else
		{
			write(1, &str, 1);
			count++;
		}
	}
	return (count);
}

int	main(void)
{
	ft_printf("Bonjour%s", "ca va");
	return (0);
}
