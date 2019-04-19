/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:46:26 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/27 16:46:29 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function trims whitespaces from both left and right side of the string.
** Returns a new string.
** \0 means end of string.
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
