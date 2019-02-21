/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:27:24 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/25 15:27:27 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		k;
	size_t	dstlength;
	size_t	srclength;

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
