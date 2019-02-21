/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:22:12 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/25 15:22:13 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t len)
{
	size_t				i;
	unsigned char		*str;

	i = 0;
	str = (unsigned char*)dst;
	while (i < len)
		str[i++] = '\0';
}
