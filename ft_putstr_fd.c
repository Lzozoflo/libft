/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:52:20 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/13 11:18:43 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string to a file or output stream.
 * 
 * The `ft_putstr_fd` function writes each character of the string `s` to the
 * file or stream specified by the file descriptor `fd`.It uses `ft_putchar_fd`
 * to write each character of the string one by one until it reaches the null 
 * character (`\0`), signaling the end of the string.
 * 
 * @param s The string to write.
 * @param fd The file descriptor or output stream to write the string to.
 */
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}
