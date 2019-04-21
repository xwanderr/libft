/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:21:38 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 22:52:33 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographical comparison between s1 and s2. If the 2 strings
** are identical the function returns 1, or 0 otherwise.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	short int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (*(s1 + i) && *(s1 + i) == *(s2 + i))
		i++;
	if (*(s1 + i) != *(s2 + i))
		return (0);
	return (1);
}
