/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:28:00 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/25 15:28:01 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	int		i;
	size_t	k;

	i = 0;
	k = 0;
	if (nb > 0)
	{
		while (*(dest + i) != '\0')
			i++;
		while (*(src + k) != '\0' && k < nb)
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
