/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:18:30 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/25 19:15:22 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Concatenates two strings and returns a new string.
 * 
 * The `ft_strjoin` function allocates memory for a new string that is 
 * the concatenation of `s1` and `s2`. It first copies the content of `s1` 
 * into the new string, then appends the content of `s2` to the end of the 
 * new string. If either of the input strings is `NULL`, the function 
 * returns `NULL`.
 * 
 * @param s1 The first string to concatenate.
 * @param s2 The second string to concatenate.
 * @return char* A new string containing the concatenation of `s1` and 
 *               `s2`, or `NULL` if memory allocation fails.
 */
char	*ft_strjoin(char *s1, char const *s2)
{
	char	*str;
	char	*tmp;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
	{
		if (s1)
			free(s1);
		return (NULL);
	}
	tmp = str;
	while (s1[i])
		*tmp++ = s1[i];
	i = 0;
	while (s2[i])
		*tmp++ = s2[i];
	*tmp = '\0';
	if (s1)
		free(s1);
	return (str);
}
