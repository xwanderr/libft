/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:30:08 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/25 15:31:10 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function translates each ascii letter to lower case, only if it is in upper
** case, otherwise returns the initial character.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
