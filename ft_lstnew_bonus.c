/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:27:04 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/12 15:33:33 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
