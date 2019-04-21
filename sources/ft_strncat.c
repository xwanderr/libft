/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:28:00 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 22:13:51 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strcat() and strncat() functions append a copy of the null-terminated
** string s2 to the end of the null-terminated string s1,
** then add a terminating `\0'.
** The string s1 must have sufficient space to hold the result.
** The strncat() function appends not more than n characters from s2,
** and then adds a terminating `\0'. The source and destination strings
** should not overlap, as the behavior is undefined.
*/

#include "../includes/libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	unsigned short int	i;
	size_t	k;

	i = 0;
	k = 0;
	if (nb > 0 && dest && src)
	{
		while (*(dest + i))
			i++;
		while (*(src + k) && k < nb)
		{
			*(dest + i + k) = *(src + k);
			k++;
		}
		*(dest + k + i) = '\0';
		return ((char*)dest);
	}
	else
		return (dest);
}
