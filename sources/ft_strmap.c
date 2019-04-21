/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:22:03 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 22:19:19 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string given as argument
** to create a “fresh” new string (with malloc(3))
** resulting from the successive applications of f.
*/

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
