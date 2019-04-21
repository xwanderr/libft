/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:28:13 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 21:25:54 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strcmp() and strncmp() functions lexicographically compare
** the null-terminated strings s1 and s2.
** The strncmp() function compares not more than n characters.
** Because strncmp() is designed for comparing strings
** rather than binary data, characters that appear
** after a `\0' character are not compared.
*/

#include "../includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if ((int)n < 1 || !s2 || !s1)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((*str1 != '\0' && (*str1 == *str2)) && --n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1 += 1;
		str2 += 1;
	}
	return (*str1 - *str2);
}
