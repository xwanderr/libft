/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:23:06 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 23:11:28 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the adress of a pointer to a link and frees the memory
** of this link and every successors of that link using the functions del and
** free(3). Finally the pointer to the link that was just freed must be set to
** NULL (quite similar to the function ft_memdel from the mandatory part).
*/

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;

	current = *alst;
	while (alst && current && del)
	{
		del(current->content, current->content_size);
		free(current);
		current = current->next;
	}
	*alst = NULL;
}
