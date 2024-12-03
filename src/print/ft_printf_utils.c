/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 07:26:12 by fcretin           #+#    #+#             */
/*   Updated: 2024/12/03 09:08:40 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_or_char(const char **format, va_list args)
{
	int	isneg;

	if (**format == '%')
	{
		(*format)++;
		isneg = ft_what_format(**format, args);
	}
	else
		isneg = ft_putchar(**format);
	if (isneg < 0)
		return (-1);
	return (isneg);
}
