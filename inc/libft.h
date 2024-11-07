/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:34:21 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/07 09:21:49 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_strchr(const char *str, int search_char);
char	*ft_strdup(const char *src);
size_t	ft_strlcpy(char *dst,const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strrchr(const char *str, int search_char);
int	ft_tolower(int c);
int	ft_toupper(int c);


#endif