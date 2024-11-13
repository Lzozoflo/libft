/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:27:04 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/13 11:21:36 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new list element.
 * 
 * The `ft_lstnew` function creates a new list element, allocates memory
 * for a `t_list` element, and initializes its `content` field with the
 * `content` value passed as an argument. The `next` field is initialized
 * to `NULL`, indicating that this element has no next element.
 * 
 * @param content The content to associate with the new list element.
 * @return t_list* The new list element, or `NULL` if memory allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*chaine;

	chaine = (t_list *)malloc(sizeof(t_list));
	if (!chaine)
		return (NULL);
	if (!content)
		chaine->content = NULL;
	else
		chaine->content = content;
	chaine->next = NULL;
	return (chaine);
}
