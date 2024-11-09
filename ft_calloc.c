/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:20:53 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/09 18:33:22 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t ec, size_t es)
{
	void	*p;

	p = malloc(ec * es);
	if (p)
	{
		ft_bzero(p, (ec * es));
		return (p);
	}
	return (NULL);
}
