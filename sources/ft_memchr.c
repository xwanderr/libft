/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:24:21 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 22:38:06 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memchr() function locates the first occurrence of c
** (converted to an unsigned char) in string s.
*/

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	x;

	str = (unsigned char*)s;
	i = 0;
	x = (unsigned char)c;
	while (i < n && s && (int)n > 0)
	{
		if (str[i] == x)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
