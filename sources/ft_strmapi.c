/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:43:42 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 22:17:36 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed as argument
** by giving its index as first argument to create a “fresh” new string
** (with malloc(3)) resulting from the suc- cessive applications of f.
*/

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*res;

	if (s)
	{
		i = 0;
		if (!(res = (char*)malloc(ft_strlen(s) + 1)))
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
