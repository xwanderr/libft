/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:38:57 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 22:15:57 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
*/

#include "../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *temp;
	const unsigned char *temp1;

	if ((int)n > 0 && s1 && s2)
	{
		temp = s1;
		temp1 = s2;
		while (n--)
		{
			if (*temp++ != *temp1++)
				return (*(temp - 1) - *(temp1 - 1));
		}
	}
	return (0);
}
