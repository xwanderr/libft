/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:00:48 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 22:56:22 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Iterates a list lst and applies the function f to each link to create
** a “fresh” list resulting from the suc- cessive applications of f.
** If the allocation fails, the function returns NULL.
*/

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	temp = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (!temp)
		return (NULL);
	list = temp;
	lst = lst->next;
	while (lst)
	{
		list->next = ft_lstnew(f(lst)->content, f(lst)->content_size);
		if (!list->next)
			return (NULL);
		list = list->next;
		lst = lst->next;
	}
	return (temp);
}
