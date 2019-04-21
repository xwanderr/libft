/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:28:51 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 21:17:08 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The stpcpy() and strcpy() functions copy the string src to dst
** (including the terminating `\0' character.)
** The stpncpy() and strncpy() functions copy
** at most len characters from src into dst.  If src is less than len
** characters long, the remainder of dst is filled with `\0' characters.
** Otherwise, dst is not terminated.
** The source and destination strings should not overlap,
** as the behavior is undefined.
*/

#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	if (!dst || (int)len < 1)
		return (NULL);
	if (!src)
		return (dst);
	while (i < len)
	{
		if (src[i])
			dst[i] = src[i];
		else
			while (i < len)
			{
				dst[i] = '\0';
				i++;
			}
		i++;
	}
	return (dst);
}
