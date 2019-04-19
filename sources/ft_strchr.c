/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:06:15 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/19 13:53:40 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = -1;
	while (++i < (int)ft_strlen(str) + 1)
		if (*(str + i) == (char)c)
			return ((char *)str + i);
	return (NULL);
}
