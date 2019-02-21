/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:06:15 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/25 14:09:24 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = -1;
	while (++i < (int)ft_strlen(str) + 1)
		if (*(str + i) == (char)c)
			return ((char *)str + i);
	return (NULL);
}
