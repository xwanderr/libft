/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:22:00 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 14:05:01 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function counts number of words delimited by char c.
*/

#include "../includes/libft.h"

static unsigned short int	ft_numwords(const char *string, unsigned char c)
{
	unsigned short int		i;
	unsigned short int		numwords;

	i = ft_strlen(string);
	numwords = 0;
	if (!ft_strchr(string, c) || !i)
		return (0);
	i--;
	while (i)
	{
		while (string[i] == c && i)
			i--;
		if ((int)i >= 0)
			numwords++;
		else
			break;
		while (string[i] != c && i)
			i--;
	}
	return (numwords);
}

/*
** Allocates and returns an array of “fresh” strings (all ending with ’\0’,
** including the array itself) obtained by spliting s,
** using the character c as a delimiter.
** If the allocation fails the function returns NULL.
** Example : ft_strsplit("*hello*fellow***students*", ’*’)
** returns the array ["hello", "fellow", "students"].
*/

char						**ft_strsplit(const char *s, char c)
{
	unsigned short int		i;
	unsigned short int		j;
	unsigned short int		t;
	char					**words;

	if (!s || !(*s) || !c)
		return (NULL);
	i = 0;
	t = 0;
	j = ft_numwords(s, c);
	words = (char**)malloc(sizeof(char*) * (j + 1));
	if (!words || !j)
		return (NULL);
	words[j] = NULL;
	while (words[t])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c)
			i++;
		if (i > j)
		{
			words[t] = (char*)ft_strndup(s + j, i - j);
			if (!words[t][0])
				words[t] = NULL;
			t++;
		}
	}
	return (words);
}
