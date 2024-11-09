/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:03:54 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/09 16:06:26 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int v, size_t c)
{
	unsigned char	*ch;
	size_t			i;

	i = 0;
	ch = p;
	while (i != c)
	{
		ch[i] = v;
		i++;
	}
	return (p);
}
