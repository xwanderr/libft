/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:27:00 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/19 22:49:00 by admin            ###   ########.fr       */
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
