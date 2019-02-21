/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:22:00 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/27 14:22:02 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_numwords(char const *s, char c)
{
	int		i;
	int		numwords;

	i = 0;
	numwords = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			numwords++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (numwords);
}

static char			*ft_strndup(const char *s, size_t n)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char				**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		t;
	char	**res;

	i = 0;
	t = 0;
	if (!s || (!(res = (char**)malloc(sizeof(char *)
			* (ft_numwords(s, c)) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			res[t] = ft_strndup(s + j, i - j);
			t++;
		}
	}
	res[t] = NULL;
	return (res);
}
