/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:06:15 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 20:42:40 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strchr() function locates the first occurrence of c (converted to a char)
** in the string pointed to by s. The terminating null character is considered
** to be part of the string; therefore if c is `\0',
** the functions locate the terminating `\0'.
*/

#include "../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = -1;
	if (str)
		while (++i < (int)ft_strlen(str) + 1)
			if (*(str + i) == (char)c)
				return ((char *)str + i);
	return (NULL);
}
