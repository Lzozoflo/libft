/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:49:15 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/07 08:15:32 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] > 47 && str[i] < 58)
		res = res * 10 + (str[i++] - '0');
	return (res * sign);
}
