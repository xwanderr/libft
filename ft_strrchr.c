/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:41:28 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/25 15:32:13 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	x;
	char	*res;
	int		i;

	res = NULL;
	i = ft_strlen(str);
	x = (char)c;
	while (i >= 0)
	{
		if (str[i] == x)
		{
			res = (char*)&str[i];
			return (res);
		}
		i--;
	}
	return (NULL);
}
