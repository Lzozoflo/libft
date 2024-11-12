/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:14:38 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/12 11:18:18 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*templst;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		templst = (*lst)->next;
		if (!templst->content)
			return ;
		del(templst->content);
		del((*lst)->next);
		free(*lst);
		*lst = templst;
	}
	*lst = NULL;
}
