/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:46:26 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/27 16:46:29 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		i;
	char	*str;
	int		len;
	int		temp;

	i = 0;
	len = 0;
	temp = 0;
	L;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_memalloc(sizeof(char) * 2));
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	if (!(str = (char*)malloc(sizeof(char) * (len - i + 2))))
		return (NULL);
	while (temp < len - i + 1)
	{
		str[temp] = s[i + temp];
		temp++;
	}
	str[temp] = '\0';
	return (str);
}
