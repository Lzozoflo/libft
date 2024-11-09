/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:17:56 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/09 16:16:12 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*str_dest;
	unsigned char	*str_src;
	size_t			i;

	i = 0;
	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	if (size > 0 && (!dest && !src))
		return (NULL);
	if (str_dest > str_src && str_dest < str_src + size)
	{
		while (size > 0)
		{
			size--;
			str_dest[size] = str_src[size];
		}
	}
	else
		while (i < size)
		{
			str_dest[i] = str_src[i];
			i++;
		}
	return (dest);
}
