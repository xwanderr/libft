/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:41:28 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/19 22:55:09 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The functions strchr() and strrchr() return a pointer
**  to the located character, or NULL if the character does
**  not appear in the string.
*/

#include "../includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	short int		i;

	if (str)
	{
		i = ft_strlen(str) + 1;
		while (--i >= 0)
			if (str[i] == c)
				return ((char*)&str[i]);
	}
	return (NULL);
}
