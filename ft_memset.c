/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:03:54 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/13 11:19:48 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills a block of memory with a given value.
 * 
 * The `ft_memset` function fills the first `c` bytes of the memory block 
 * pointed to by `p` with the value `v` (converted to `unsigned char`). It 
 * returns the pointer `p` after modification.
 * 
 * @param p Pointer to the memory block to fill.
 * @param v The value to write into each byte of the memory block 
 *          (converted to `unsigned char`).
 * @param c The number of bytes to fill in the memory block.
 * @return void* The pointer to the modified memory block.
 */
void	*ft_memset(void *p, int v, size_t c)
{
	unsigned char	*ch;
	size_t			i;

	i = 0;
	ch = p;
	while (i != c)
	{
		ch[i] = v;
		i++;
	}
	return (p);
}
