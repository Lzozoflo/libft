/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:38:09 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/06 15:38:55 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <stdlib.h>
#include <string.h>


size_t	ft_strlcpy(char *dst,const char *src, size_t size)
{
	int	i;
	size_t j;

	i = 0;
	j = ft_strlen(dst);
	while (size > 0)
	{
		dst[j + i] = src[i];
		i++;
		size--;
	}
	dst[j + i] = '\0';
	return (j + i);
}
