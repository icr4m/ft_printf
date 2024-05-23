/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:41:49 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/23 15:25:02 by ijaber           ###   ########.fr       */
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
	const char	*str1 = NULL;
	int			*i;
	const char	*str2 = "test";

	i = malloc(10000);
	// test 1
	printf(Purple "Test 1 :\n");
	printf(White);
	i[0] = printf("PRINTF_OG:%s\n", str1);
	i[1] = ft_printf("FT_PRINTF:%s\n", str1);
	if (i[0] == i[1])
		printf(Green "Ok ✓");
	else
		printf(Red "KO ✗ OG=%d, FT:%d", i[0], i[1]);
	printf(White "\n");
	// test 2
	printf(Purple "Test 2 :\n");
	printf(White);
	i[2] = printf("PRINTF_OG: %s %x %c\n", str2, -42, '>');
	i[3] = ft_printf("FT_PRINTF: %s %x %c\n", str2, -42, '>');
	if (i[2] == i[3])
		printf(Green "Ok ✓");
	else
		printf(Red "KO ✗ OG=%d, FT:%d", i[2], i[3]);
	printf(White "\n");
	// test 3
	printf(Purple "Test 3 :\n");
	printf(White);
	i[4] = printf("PRINTF_OG: %d %X %u\n", -42, -42, -42);
	i[5] = ft_printf("FT_PRINTF: %d %X %u\n", -42, -42, -42);
	if (i[4] == i[5])
		printf(Green "Ok ✓");
	else
		printf(Red "KO ✗ OG=%d, FT:%d", i[4], i[5]);
	printf(White "\n");
	// test 4
	printf(Purple "Test 4 :\n");
	printf(White);
	i[6] = printf("PRINTF_OG: %i %% %p\n", -42, &str2);
	i[7] = ft_printf("FT_PRINTF: %i %% %p\n", -42, &str2);
	if (i[6] == i[7])
		printf(Green "Ok ✓");
	else
		printf(Red "KO ✗ OG=%d, FT:%d", i[6], i[7]);
	printf(White "\n");
	// test 5
	printf(Purple "Test 5 (%%d):\n");
	printf(White);
	i[8] = printf("PRINTF_OG: %d %d %d\n", -100, 0, 100);
	i[9] = ft_printf("FT_PRINTF: %d %d %d\n", -100, 0, 100);
	if (i[8] == i[9])
		printf(Green "Ok ✓");
	else
		printf(Red "KO ✗ OG=%d, FT:%d", i[8], i[9]);
	printf(White "\n");
	// test 6
	printf(Purple "Test 6 (%%i):\n");
	printf(White);
	i[10] = printf("PRINTF_OG: %i %i %i\n", INT32_MIN, 0, INT32_MAX);
	i[11] = ft_printf("FT_PRINTF: %i %i %i\n", INT32_MIN, 0, INT32_MAX);
	if (i[10] == i[11])
		printf(Green "Ok ✓");
	else
		printf(Red "KO ✗ OG=%d, FT:%d", i[10], i[11]);
	printf(White "\n");
	// test 7
	printf(Purple "Test 7 (%%u):\n");
	printf(White);
	i[12] = printf("PRINTF_OG: %u %u %u\n", INT32_MIN, 0, INT32_MAX);
	i[13] = ft_printf("FT_PRINTF: %u %u %u\n", INT32_MIN, 0, INT32_MAX);
	if (i[12] == i[13])
		printf(Green "Ok ✓");
	else
		printf(Red "KO ✗ OG=%d, FT:%d", i[12], i[13]);
	printf(White "\n");
	return (0);
}
