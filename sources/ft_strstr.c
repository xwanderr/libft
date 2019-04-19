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

/*
** Function locates a string in another string.
** Returns pointer to a substring.
*/

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned short int i;
	unsigned short int j;

	if (s1)
	{
		if (!(*s1) && !(*s2))
			return (0);
		else if (!(*s1))
			return (0);
		else if (!s2 || !(*s2))
			return ((char*)s1);
		i = -1;
		j = 0;
		while (s1[++i] != '\0')
			while (s2[j] == s1[i + j])
			{
				if (s2[j + 1] == '\0')
					return ((char*)&s1[i]);
				j++;
			}
	}
	return (0);
}
