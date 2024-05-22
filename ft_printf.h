/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:07:45 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/22 18:59:17 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define White "\033[0;37m"
# define Green "\033[0;32m"
# define Red "\033[0;31m"
# define Purple "\033[0;35m"

int		ft_printf(char const *str, ...);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putnbr(int n);
size_t	ft_r_type(char c, va_list arg);
size_t	ft_putnbr_base(int nbr, char *base);

#endif
