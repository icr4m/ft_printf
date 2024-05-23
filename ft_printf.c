/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:41:49 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/23 13:41:26 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(char const *str, ...)
{
	size_t	count;
	va_list	arg;
	size_t	i;

	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count = ft_r_type(str[i + 1], arg);
			i += 2;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			count++;
		}
	}
	va_end(arg);
	return (count);
}

int	main(void)
{
	const int	i = printf("PRINTF_OG:%c\n", 0x23);
	const int	i2 = ft_printf("FT_PRINTF:%c\n", 0x23);

	// const char	*str1 = NULL;
	if (i2 == i)
	{
		printf(Green);
		printf("Masterclass");
	}
	else
	{
		printf(Red);
		printf("Boooouh OG=%d, FT:%d", i, i2);
	}
	return (0);
}
