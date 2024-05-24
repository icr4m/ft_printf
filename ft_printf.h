/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:07:45 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/24 10:00:24 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define White "\033[0;37m"
# define Green "\033[0;32m"
# define Red "\033[0;31m"
# define Purple "\033[0;35m"
# define HEXA_lower "0123456789abcdef"
# define HEXA_upper "0123456789ABCDEF"

int		ft_printf(char const *str, ...);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putnbr(int n);
size_t	ft_r_type(char c, va_list arg);
size_t	ft_putnbr_base(unsigned long nbr, char *base);
size_t	ft_print_nb(unsigned int n);
size_t	ft_p(void *ptr);

#endif
