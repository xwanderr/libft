/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:43:26 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/28 12:43:29 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s)
	{
		if (!(sub = malloc(len + 1)))
			return (NULL);
		sub[len] = '\0';
		while (s[start] && len--)
			sub[len] = s[start + len];
		return (sub);
	}
	return (NULL);
}
