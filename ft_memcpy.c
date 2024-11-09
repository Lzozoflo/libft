/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:45:26 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/09 16:09:38 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*ts;
	unsigned char	*td;
	size_t			i;

	i = 0;
	ts = (unsigned char *)src;
	td = (unsigned char *)dest;
	if (size > 0 && (!dest && !src))
		return (NULL);
	while (i < size)
	{
		td[i] = ts[i];
		i++;
	}
	return (dest);
}
