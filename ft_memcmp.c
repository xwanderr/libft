/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:38:57 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/25 15:39:00 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *temp;
	const unsigned char *temp1;

	if (n != 0)
	{
		temp = s1;
		temp1 = s2;
		while (n-- != 0)
		{
			if (*temp++ != *temp1++)
				return (*(temp - 1) - *(temp1 - 1));
		}
	}
	return (0);
}
