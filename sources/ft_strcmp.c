/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:25:57 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 20:38:12 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strcmp() function lexicographically compare the null-terminated strings.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned short int i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] == s2[i] && s1[i] && s2[i])
			i++;
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (-1);
}
