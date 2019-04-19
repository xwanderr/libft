/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:43:26 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/28 12:43:29 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function returns a new string, which is a subpart of another string.
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
