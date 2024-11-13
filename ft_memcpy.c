/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:45:26 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/13 11:20:13 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a block of memory from a source to a destination.
 * 
 * The `ft_memcpy` function copies `size` bytes of memory from the block 
 * pointed to by `src` to the block pointed to by `dest`. If either `dest` 
 * or `src` pointers are invalid (NULL), the function returns `NULL`. 
 * The function does not handle cases where the memory blocks overlap; 
 * for this, `ft_memmove` should be used.
 * 
 * @param dest Pointer to the destination memory block.
 * @param src Pointer to the source memory block to copy from.
 * @param size The number of bytes to copy.
 * @return void* Pointer to the destination memory block (`dest`).
 */
void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*ts;
	unsigned char	*td;
	size_t			i;

	i = 0;
	ts = (unsigned char *)src;
	td = (unsigned char *)dest;
	if (size > 0 && (!dest && !src))
		return (NULL);
	while (i < size)
	{
		td[i] = ts[i];
		i++;
	}
	return (dest);
}
