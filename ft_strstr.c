/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:29:52 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/27 15:34:43 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t i;
	size_t j;

	i = 0;
	if (*s1 == '\0' && *s2 == '\0')
		return ((char*)s1);
	if (s1[0] == '\0')
		return (0);
	if (s2[0] == '\0')
		return ((char*)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] == s1[i + j])
		{
			if (s2[j + 1] == '\0')
				return ((char*)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
