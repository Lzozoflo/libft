/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:30:10 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/29 10:31:32 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

size_t	ft_strlen(const char *str);
int		ft_putchar(char c);
int		ft_putstr(char *s);
char	ft_convert_base(unsigned long nbr, int base, const char format);
int		ft_format_or_char(const char **format, va_list args);
int		ft_what_format(const char format, va_list args);
int		ft_printf(const char *format, ...);

#endif