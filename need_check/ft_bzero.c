/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:44:37 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/07 09:40:08 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_bzero(void *p, size_t c)
{
	unsigned char	*ch;
	int	i;

	i = 0;
	ch = p;
	while (i != c)
	{
		ch[i] = 0;
		i++;
	}
}
int main(void)
{
	char s[] = {"oui o5i baguette"};
	int i[] = {1, 1, 1,1,1,1,1,1}; 
	int j = 0;
	ft_bzero(i, 5);
	while(j < 8)
	{
		printf("-%d.",i[j]);
		j++;
	}
}