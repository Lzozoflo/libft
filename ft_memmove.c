/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:17:56 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/11 12:27:45 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (size > 0 && (!dest && !src))
		return (NULL);
	if (d > s && d < s + size)
	{
		while (size-- > 0)
			d[size] = s[size];
	}
	else
	{
		while (i < size)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
