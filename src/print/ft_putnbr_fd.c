/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:07:51 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/26 07:20:49 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes an integer to a file or output stream.
 * 
 * The `ft_putnbr_fd` function writes the integer `n` to the file or stream 
 * specified by the file descriptor `fd`. If `n` is negative, it first writes 
 * a minus sign (`-`), then the number using recursion to divide the integer 
 * and write each digit one by one. If `n` is equal to `-2147483648`, it is 
 * treated specially due to integer limits.
 * 
 * @param n The integer to write.
 * @param fd The file descriptor or output stream to write the integer to.
 */
ssize_t	ft_putnbr_fd(int n, int fd)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	if (n < 0)
	{
		count = ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr_fd(n / 10, fd);
	n = (n % 10);
	count += ft_putchar_fd(n + '0', fd);
	return (count);
}

ssize_t	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		count = ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	n = (n % 10);
	count += ft_putchar(n + '0');
	return (count);
}

int	ft_putnbr_base_unsign(unsigned long nbr, int base, const char format)
{
	int	count;

	count = 0;
	if (nbr >= (unsigned long)base)
		count += ft_putnbr_base_unsign(nbr / base, base, format);
	count += ft_putchar((ft_convert_base(nbr, base, format)));
	return (count);
}

int	ft_putnbr_base(int nbr, int base, const char format)
{
	int	count;

	count = 0;
	if (nbr == INT_MIN)
	{
		count = ft_putstr("-2147483648");
		return (count);
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		count += ft_putchar('-');
	}
	if (nbr >= base)
		count += ft_putnbr_base(nbr / base, base, format);
	count += ft_putchar((ft_convert_base((unsigned long)nbr, base, format)));
	return (count);
}
