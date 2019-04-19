/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:27:00 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/25 15:27:05 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function duplicates a string with a given length.
*/

#include "../includes/libft.h"

unsigned char	*ft_strndup(const char *src, unsigned short int length)
{
	unsigned char	*string;

	string = (unsigned char *)malloc(length + 1);
	if (!string || !src || (int)length < 1)
		return (NULL);
	string[length] = '\0';
	while (length--)
		string[length] = src[length];
	return (string);
}
