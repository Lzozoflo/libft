/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:34:14 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/11 12:18:17 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int s)
{
	int	i;

	i = 0;
	while (str[i] != (char)s && str[i])
		i++;
	if (str[i] == (char)s)
		return ((char *)&str[i]);
	return (NULL);
}
