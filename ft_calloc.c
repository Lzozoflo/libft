/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:20:53 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/13 11:47:23 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and initializes a memory block.
 * 
 * The function `ft_calloc` allocates a memory block large enough to hold 
 * an array of `nb` elements, each of size `es` bytes. It then initializes 
 * each byte of the allocated block to zero. 
 * This function is similar to `calloc` from the standard C library.
 * 
 * @param nb The number of elements to allocate.
 * @param es The size, in bytes, of each element.
 * @return void* A pointer to the allocated and zero-initialized memory block.
 *               Returns `NULL` if the allocation fails.
 */
void	*ft_calloc(size_t nb, size_t es)
{
	void	*p;

	p = malloc(nb * es);
	if (p)
	{
		ft_bzero(p, (nb * es));
		return (p);
	}
	return (NULL);
}
