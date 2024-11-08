/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:38:09 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/08 11:26:04 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < (size - 1) || src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[size - 1] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
int	main(void)
{
	char *str = "BBBB";
	char buff1[0xF00];
	char buff2[0xF00];

	memset(buff1, 'A', 20);
	memset(buff2, 'A', 20);
	strlcpy(buff1, str, sizeof(buff1));
	ft_strlcpy(buff2, str, sizeof(buff2));
	printf("%s.%s", buff1, buff2);
}