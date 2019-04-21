/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:46:26 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 19:43:19 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a copy of the string,
** given as argument without whitespaces,
** at the beginning or at the end of the string.
** Will be considered as whitespaces the following characters
** ’ ’, ’\n’ and ’\t’. If s has no whites- paces at the beginning or at the end,
** the function returns a copy of s.
** If the allocation fails the function returns NULL.
*/

#include "../includes/libft.h"

char	*ft_strtrim(const char *s)
{
	unsigned char			*string;
	unsigned short int		length;

	if (s)
	{
		length = ft_strlen(s);
		if (!length)
			return (NULL);
		while (ft_isspace(s[length - 1]) && length--)
			;
		while (ft_isspace(*s) && length--)
			s++;
		string = ft_strndup(s, length);
		if (!string || !length)
			return (NULL);
		return ((char*)string);
	}
	return (NULL);
}
