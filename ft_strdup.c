/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:55:57 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/07 17:42:30 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;
	size_t	i;

	i = ft_strlen(src);
	cpy = (char *)malloc(sizeof(char) * i);
	if (cpy)
	{
		ft_strlcpy(cpy, src, i);
		return (cpy);
	}
	return (NULL);
}
