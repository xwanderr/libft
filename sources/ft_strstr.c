/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:29:52 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 20:30:23 by admin            ###   ########.fr       */
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
		if (!s2 || !(*s2))
			return ((char*)s1);
		if (!(*s1) || (!(*s1) && !(*s2)))
			return (0);
		i = 0;
		while (s1[i])
		{
			j = 0;
			while (s2[j] == s1[i + j])
			{
				if (!s2[j + 1])
					return ((char*)&s1[i]);
				j++;
			}
			i++;
		}
	}
	return (0);
}
