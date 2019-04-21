/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:53:59 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 22:40:56 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’,
** result of the concatenation of s1 and s2.
** If the allocation fails the function returns NULL.
*/

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*answer;
	int		i;
	int		j;

	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && s2)
	{
		if (!(answer = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		i = -1;
		while (s1[++i] != '\0')
			answer[i] = s1[i];
		j = -1;
		while (s2[++j] != '\0')
			answer[i + j] = s2[j];
		answer[i + j] = '\0';
		return (answer);
	}
	return (NULL);
}
