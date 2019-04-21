/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:27:00 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 22:57:54 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strdup() function allocates sufficient memory for a copy of
** the string s1, does the copy, and returns a pointer to it.
** The pointer may subsequently be used as an argument to the function free(3).
*/

#include "../includes/libft.h"

char	*ft_strdup(const char *src)
{
	char	*s;
	int		len;

	if (!src || !(len = ft_strlen(src)))
		return (NULL);
	if (!(s = (char *)malloc(len + 1)))
		return (NULL);
	s[len] = '\0';
	while (len >= 0)
	{
		s[len] = src[len];
		len--;
	}
	return (s);
}
