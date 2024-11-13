/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:53:12 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/13 11:19:11 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string followed by a newline to a file.
 * 
 * The `ft_putendl_fd` function writes the string `s` to the file or stream 
 * specified by the file descriptor `fd`, then adds a newline character (`\n`) 
 * at the end.
 * 
 * @param s The string to write.
 * @param fd The file descriptor or output stream to write the string to.
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
