/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:30:08 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 19:43:18 by admin            ###   ########.fr       */
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
