/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:25:25 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 20:54:48 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strcat() and strncat() functions append a copy of the null-terminated
** string s2 to the end of the null-terminated string s1,
** then add a terminating `\0'.
** The string s1 must have sufficient space to hold the result.
*/

#include "../includes/libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	unsigned short int i;
	unsigned short int k;

	i = 0;
	k = 0;
	if (!dst || !src)
		return (NULL);
	while (*(dest + i))
		i++;
	while (*(src + k))
	{
		*(dest + i + k) = *(src + k);
		k++;
	}
	*(dest + k + i) = '\0';
	return (dest);
}
