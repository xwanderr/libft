/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 09:27:44 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 22:44:05 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns a “fresh” memory area.
** The memory allocated is initialized to 0.
** If the allocation fails, the function returns NULL.
*/

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	char		*mem;
	size_t		i;

	i = 0;
	if ((int)size < 0)
		return (NULL);
	if (!(mem = (char*)malloc(size)))
		return (NULL);
	else
	{
		while (i < size)
		{
			mem[i] = 0;
			i++;
		}
		return ((void*)mem);
	}
}
