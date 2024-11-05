/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:46:05 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/05 17:48:35 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int search_char)
{
	int	i;

	i = ft_strlen(str);
	while (i > -1)
	{
		if (str[i] == search_char)
			return (&str[i]);
		i--;
	}
}