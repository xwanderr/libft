/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:00:48 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/28 17:00:50 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
