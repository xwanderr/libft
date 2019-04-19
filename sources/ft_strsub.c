/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:43:26 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/19 14:15:33 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” substring
** from the string given as argument.
** The substring begins at indexstart and is of size len.
** If start and len aren’t refer- ing to a valid substring,
** the behavior is undefined.
** If the allocation fails, the function returns NULL.
*/

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned char		*substring;
	unsigned short int	length;

	if (s && (int)len > 0)
	{
		length = ft_strlen(s);
		substring = ft_memalloc(len + 1);
		if (!length || length < start + len || !substring)
			return (NULL);
		substring[len] = '\0';
		while (s[start] && len--)
			substring[len] = s[start + len];
		return ((char*)substring);
	}
	return (NULL);
}
