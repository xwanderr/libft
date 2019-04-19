/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:22:03 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:05 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	int		i;
	char	*res;

	if (s)
	{
		i = 0;
		if (!(res = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		len = 0;
		if (res)
		{
			while (s[i])
			{
				res[i] = f(s[i]);
				len++;
				i++;
			}
			res[i] = '\0';
		}
		return (res);
	}
	return (NULL);
}
