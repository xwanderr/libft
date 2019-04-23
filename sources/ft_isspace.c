/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 00:44:59 by admin             #+#    #+#             */
/*   Updated: 2019/04/23 22:13:37 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function check char for a whitespace.
*/

unsigned short int		ft_isspace(unsigned short int c)
{
	if (c == ' ' || c == '\r' || c == '\f' || c == '\v' || c == '\n' ||
		c == '\t')
		return (1);
	return (0);
}
