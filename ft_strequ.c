/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:21:38 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/27 15:21:39 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (*(s1 + i) && *(s1 + i) == *(s2 + i))
	{
		i++;
	}
	if (*(s1 + i) != *(s2 + i))
		return (0);
	return (1);
}
