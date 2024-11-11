/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:36:11 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/11 09:44:59 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *cmp, size_t len)
{
	size_t	i;
	size_t	j;

	if (*cmp == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && cmp[j] && str[i + j] == cmp[j] && (i + j) < len)
			j++;
		if (!cmp[j])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

