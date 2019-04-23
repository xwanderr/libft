/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:22:12 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 23:07:53 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The bzero() function writes n zeroed bytes to the string s.
** If n is zero, bzero() does nothing.
*/

#include "../includes/libft.h"

void	ft_bzero(void *dst, size_t len)
{
	size_t				i;
	unsigned char		*str;

	i = 0;
	str = (unsigned char*)dst;
	while (i < len)
		str[i++] = '\0';
}
