/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 16:16:48 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 23:02:26 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds the element new at the beginning of the list.
*/

#include "../includes/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && *alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
