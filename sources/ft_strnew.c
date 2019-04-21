/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 09:24:23 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 19:46:04 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’.
** Each character of the string is initialized at ’\0’.
** If the allocation fails the function returns NULL.
*/

#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if ((int)size < 1 || !(str = (char*)malloc(size + 1)))
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
