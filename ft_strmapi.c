/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:43:42 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/30 15:21:11 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
				res[i] = f((unsigned int)i, s[i]);
				len++;
				i++;
			}
			res[i] = '\0';
		}
		return (res);
	}
	return (NULL);
}
