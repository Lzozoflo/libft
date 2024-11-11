/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:46:05 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/11 12:12:37 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int s)
{
	size_t	i;

	i = ft_strlen(str);
	while (str[i] != (char)s && i > 0)
		i--;
	if (str[i] == (char)s)
		return ((char *)&str[i]);
	return (NULL);
}
