/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:30:10 by fcretin           #+#    #+#             */
/*   Updated: 2024/12/10 07:34:52 by fcretin          ###   ########.fr       */
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
int		ft_putnbr_base(int nbr, int base, const char format);
int		ft_putnbr_base_unsign(unsigned long nbr, int base, const char f);
char	ft_convert_base(unsigned long nbr, int base, const char format);
int		ft_printf(const char *format, ...);

#endif
