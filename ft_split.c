/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:34:46 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/10 19:20:02 by fcretin          ###   ########.fr       */
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
		if (*s != c && iw == 0)
		{
			iw = 1;
			i++;
		}
		else if (*s == c)
		{
			iw = 0;
		}
		s++;
	}
	return (i);
}

static int	ft_len_word(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str != c && *str)
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_free_the_malloc(char **str, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		free(str[i++]);
	}
	free(str);
}
char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		nw;

	i = 0;
	j = 0;
	nw = ft_num_word(s, c);
	str = malloc((sizeof(char *) * (nw + 1)));
	if (!str)
		return (NULL);
	while (nw--)
	{
		while (s[i] != c && s[i])
			i++;
		str[j] = ft_substr(s, c, ft_len_word(&s[i], c) + 1);
		if (!str[j])
		{
			ft_free_the_malloc(str, j);
			return (NULL);
		}
		j++;
	}
	str[j] = NULL;
	return (str);
}
