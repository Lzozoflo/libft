/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:45:26 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/08 10:54:41 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char	*tests;
	char	*testd;

	tests = (char *)src;
	testd = dest;
	tests[size] = '\0';
	while (size > 0)
	{
		size--;
		testd[size] = tests[size];
	}
	return ((char *)&dest);
}
