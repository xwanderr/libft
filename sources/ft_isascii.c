/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:23:10 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 23:06:39 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function checks whether char is in ascii table char or not.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
