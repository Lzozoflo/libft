/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:57:27 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/10 10:17:45 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		if (n == -2147483648)
			return (11);
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}
char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = get_num_len(n);
	if (n == -2147483648)
		return (strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
