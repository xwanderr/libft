/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:53:59 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/27 15:54:00 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		if (!(answer = (char*)malloc(sizeof(char) *
			(ft_strlen(s1) + ft_strlen(s2) + 1))))
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
