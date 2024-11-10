/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:14:02 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/10 13:47:01 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = strlen(s1);
	k = 0;
	while (s1[i] && strchr(set, s1[i]))
		i++;
	while (j > i && strchr(set, s1[j - 1]))
		j--;
	str = malloc(j - i + 1);
	if (!str)
		return (NULL);
	while (i < j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
