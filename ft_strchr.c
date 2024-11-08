/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:34:14 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/08 10:54:47 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_char)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == search_char)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
