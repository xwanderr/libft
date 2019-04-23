/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:49:42 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 21:29:52 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memset() function writes len bytes of value
** c (converted to an unsigned char) to the string b.
*/

#include "../includes/libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	size_t			i;
	unsigned char	*res;

	i = 0;
	if (!destination || (int)n < 0)
		return (NULL);
	res = (unsigned char*)destination;
	while (i < n)
		res[i++] = (unsigned char)c;
	return (destination);
}
