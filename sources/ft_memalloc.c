/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 09:27:44 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/28 09:27:45 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	char		*mem;
	size_t		i;

	i = 0;
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