/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:15:03 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 22:55:16 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns a “fresh” link.
** The variables content and content_size of the new link are initialized
** by copy of the parameters of the function. If the pa- rameter content is nul,
** the variable content is initialized to NULL and the variable content_size is
** initialized to 0 even if the parameter content_size isn’t. The variable next
** is initialized to NULL. If the allocation fails, the function returns NULL.
*/

#include "../includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = ft_memalloc(content_size);
		new->content = ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
