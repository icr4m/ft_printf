/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:41:49 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/22 19:24:03 by ijaber           ###   ########.fr       */
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
			count += ft_r_type(str[i + 1], arg);
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
	const char	*str1 = "test";
	const int	i = ft_printf("FT PRINTF : %s%c %x \n", str1, '?', -213);
	const int	i2 = printf("PRINTF OG : %s%c %x \n", str1, '?', -213);

	if (i2 == i)
	{
		printf(Green);
		printf("Masterclass");
	}
	else
	{
		printf(Red);
		printf("Boooouh OG=%d , FT:%d", i2, i);
	}
	return (0);
}
