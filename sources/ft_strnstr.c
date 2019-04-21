/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:29:04 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 14:04:26 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strnstr() function locates the first occurrence
** of the null-terminated string needle in the string haystack,
** where not more than len characters are searched.
** Characters that appear after a `\0' character are not
** searched.  Since the strnstr() function is a FreeBSD specific API,
** it should only be used when portability is not a concern.
*/

#include "../includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned short int i;
	unsigned short int j;

	if (s1 && (!s2 || !(*s2) || !len))
		return ((char*)s1);
	i = 0;
	if (s1 && s2 && (int)len > 0)
		while (s1[i] && i < len)
		{
			j = 0;
			while (s2[j] == s1[i + j])
			{
				if (i + j == len)
					return (NULL);
				if (!s2[j + 1])
					return ((char*)&s1[i]);
				j++;
			}
			i++;
		}
	return (NULL);
}
