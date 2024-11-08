/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:55:57 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/08 18:42:23 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;
	size_t	i;

	i = ft_strlen(src);
	cpy = (char *)malloc(sizeof(char) * (i + 1));
	if (cpy)
	{
		cpy[i] = '\0';
		while (i-- > 0)
			cpy[i] = src[i];
		return (cpy);
	}
	return (NULL);
}
