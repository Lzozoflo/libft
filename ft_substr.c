/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:34:00 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/13 11:13:52 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extracts a substring from a given string.
 * 
 * The `ft_substr` function extracts a substring from the string `str`, 
 * starting at index `i` and taking up to `len` characters. If `i` is 
 * greater than the length of `str`, or if `str` is `NULL`, an empty 
 * string is returned. If the substring to be extracted is shorter than 
 * `len`, the function stops at the end of the source string. A new string 
 * is dynamically allocated to hold the extracted substring, which is 
 * null-terminated.
 * 
 * @param str The string from which to extract the substring.
 * @param i The starting index of the substring.
 * @param len The maximum number of characters to extract.
 * @return char* The extracted substring, or an empty string if index `i` 
 *                is out of bounds, or `NULL` if memory allocation fails.
 */
char	*ft_substr(char const *str, unsigned int i, size_t len)
{
	char	*s;
	size_t	j;

	j = 0;
	if (!str || ft_strlen(str) <= i)
	{
		s = (char *)malloc(1);
		if (!s)
			return (NULL);
		s[0] = '\0';
		return (s);
	}
	if (ft_strlen(&str[i]) < len)
		len = ft_strlen(&str[i]);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	while (j < len && str[i + j])
	{
		s[j] = (char)str[i + j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
