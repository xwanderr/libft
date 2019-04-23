/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:26:22 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 20:25:07 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The stpcpy() and strcpy() functions copy the string src to dst
** (including the terminating `\0' character.)
*/

#include "../includes/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
