/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:34:00 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/10 13:04:43 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int i,size_t len)
{
	char *str;
	size_t j;
	
	j = 0;
	if (!s || ft_strlen(s) <= i)
	{
		str = (char *)malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (ft_strlen(&s[i]) < len)
		len = ft_strlen(&s[i]);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (j < len && s[i + j])
	{
		str[j] = (char)s[i + j];
		j++;
	}
	str[j]= '\0';
	return (str);
}
