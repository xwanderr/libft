/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:24:21 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/25 15:24:27 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	x;

	str = (unsigned char*)s;
	i = 0;
	x = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == x)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
