/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:13:15 by fcretin           #+#    #+#             */
/*   Updated: 2024/11/12 18:32:02 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	t_list	*newlst;

	new = ft_lstnew(f(lst->content));
	if (!lst || !del || !f || !new)
		return (NULL);
	temp = newlst;
	lst = lst->next;
	while (lst)
	{

		lst = lst->next;
	}
	return (lst);
}
