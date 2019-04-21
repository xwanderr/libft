/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:30:25 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 19:43:06 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function translates each ascii letter to upper case, only if it is in lower
** case, otherwise returns the initial character.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
