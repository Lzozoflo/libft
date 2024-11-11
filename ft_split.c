/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:34:46 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/11 15:59:44 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_word(const char *s, char c)
{
	int	i;
	int	iw;

	i = 0;
	iw = 0;
	while (*s)
	{
		if (iw == 0 && *s != c)
		{
			iw = 1;
			i++;
		}
		else if (iw == 1 && *s == c)
			iw = 0;
		s++;
	}
	return (i);
}

static int	ft_len_word(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str && *str != c)
	{
		str++;
		i++;
	}
	return (i);
}

char 	**ft_free_the_malloc(char **str, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		free(str[i++]);
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		nw;

	i = 0;
	nw = ft_num_word(s, c);
	str = (char **)malloc(sizeof(char *) * (nw + 1));
	if (!str)
		return (NULL);
	while (nw--)
	{
		while (*s && *s == c)
			s++;
		str[i] = ft_substr(s, 0, ft_len_word(s, c));
		if (!str[i])
			return (ft_free_the_malloc(str, i));
		s = s + ft_len_word(s, c);
		i++;
	}
	str[i] = NULL;
	return (str);
}
