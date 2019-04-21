/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:22:12 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 19:41:41 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
