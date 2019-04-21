/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:21:01 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 19:39:23 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographical comparison between s1 and s2 up to n characters
** or until a ’\0’ is reached.
** If the 2 strings are identical, the function returns 1, or 0 otherwise.
*/

#include "../includes/libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2 || (int)n < 1)
		return (0);
	return (ft_strncmp(s1, s2, n) ? 0 : 1);
}
