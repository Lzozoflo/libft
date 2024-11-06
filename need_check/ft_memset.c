/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:03:54 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/06 18:38:33 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*memset( void *p, int v, size_t c)
{
	unsigned char *ch;
	int	i;

	i = 0;
	ch = (unsigned char *)p;
	while (i != c)
	{
		ch[i] = (unsigned char)v;
		i++;
	}
	return (p);
}
int	main(void)
{
	int	p[] = {20, 50, 40, 5, 1};
	int	i = 0;

	memset(p, '5', 2);
	while (i < 5)
	{
		printf("%d,", p[i++]);
	}
	return (0);
}