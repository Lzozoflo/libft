/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:15:49 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/08 13:23:19 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (size != 0)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (i);
}

/*int main(void)
{
	char	dst[7] = "oui oui";
	char	src[8] = "baguette";
	size_t	size = 5;

	ft_strlcat(dst, src, size);
	printf("dst est %s\n", dst);
	printf("src est %s\n", src);
	//strlcat();
}*/
