/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:27:43 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 22:21:02 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strlen() function computes the length of the string s.
*/

#include "../includes/libft.h"

size_t		ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}
