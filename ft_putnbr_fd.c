/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:07:51 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/13 11:18:51 by fcretin          ###   ########.fr       */
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
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	n = (n % 10);
	ft_putchar_fd(n + '0', fd);
}
