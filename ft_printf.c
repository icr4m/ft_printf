/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:41:49 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/23 14:03:33 by ijaber           ###   ########.fr       */
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
	const char	*str1 = NULL;
	int			i;
	int			i2;
	const char	*str2 = "test";
	int			i3;
	int			i4;
	int			i5;
	int			i6;
	int			i7;
	int			i8;

	// test 1
	printf(Purple "Test 1 :\n");
	printf(White);
	i = printf("PRINTF_OG:%s\n", str1);
	i2 = ft_printf("FT_PRINTF:%s\n", str1);
	if (i2 == i)
		printf(Green "Ok ✓");
	else
		printf(Red "KO ✗ OG=%d, FT:%d", i, i2);
	printf(White "\n");
	// test 2
	printf(Purple "Test 2 :\n");
	printf(White);
	i3 = printf("PRINTF_OG: %s %x %c\n", str2, -42, '>');
	i4 = ft_printf("FT_PRINTF: %s %x %c\n", str2, -42, '>');
	if (i3 == i4)
		printf(Green "Ok ✓");
	else
		printf(Red "KO ✗ OG=%d, FT:%d", i3, i4);
	printf(White "\n");
	// test 3
	printf(Purple "Test 3 :\n");
	printf(White);
	i5 = printf("PRINTF_OG: %d %X %u\n", -42, -42, -42);
	i6 = ft_printf("FT_PRINTF: %d %X %u\n", -42, -42, -42);
	if (i5 == i6)
		printf(Green "Ok ✓");
	else
		printf(Red "KO ✗ OG=%d, FT:%d", i5, i6);
	printf(White "\n");
	// test 4
	printf(Purple "Test 4 :\n");
	printf(White);
	i7 = printf("PRINTF_OG: %i %% %p\n", -42, &str2);
	i8 = ft_printf("FT_PRINTF: %i %% %p\n", -42, &str2);
	if (i7 == i8)
		printf(Green "Ok ✓");
	else
		printf(Red "KO ✗ OG=%d, FT:%d", i7, i8);
	printf(White "\n");
	return (0);
}
