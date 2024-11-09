/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:15:49 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/09 17:35:13 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	i = 0;
	if (size <= d)
		return (size + s);
	while ((d + i) < (size - 1) && src[i])
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}
