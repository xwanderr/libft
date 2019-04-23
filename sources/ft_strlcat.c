/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:27:24 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 20:48:20 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlcat() appends string src to the end of dst.
** It will append at most dstsize - strlen(dst) - 1 characters.
** It will then NUL-terminate, unless dstsize is 0 or the original dst
** string was longer than dstsize (in practice
** this should not happen as it means that either dstsize is incorrect
** or that dst is not a proper string).
*/

#include "../includes/libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	short int	k;
	size_t	dstlength;
	size_t	srclength;

	if (!dst || !src)
		return (0);
	i = ft_strlen((const char*)dst);
	k = 0;
	dstlength = ft_strlen((const char*)dst);
	srclength = ft_strlen((const char*)src);
	if (dstsize < dstlength + 1)
		return (srclength + dstsize);
	if (dstsize > dstlength + 1)
	{
		while (i < dstsize - 1 && src[k])
			dst[i++] = src[k++];
		dst[i] = '\0';
	}
	return (dstlength + srclength);
}
