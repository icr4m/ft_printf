/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:41:49 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/21 17:19:56 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
void	ft_print_info(char c, va_list arg)
{
	if (c == 's')
	{
		ft_putstr_fd(1, va_arg(arg, char *));
	}
}

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
			ft_print_info(*str + 1, arg);
			str += 2;
			count += 2;
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
