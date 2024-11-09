/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:36:57 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/09 18:03:42 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int v, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)p;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)v)
			return ((unsigned char *)&str[i]);
		i++;
	}
	return (NULL);
}
