/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:34:14 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/07 09:20:35 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strchr(const char *str, int search_char)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == search_char)
			return ((char *) &str[i]);
		i++;
	}
	return (NULL);
}
