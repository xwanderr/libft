/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 17:55:05 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 19:43:15 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function swaps first and last 4 bits in the char.
*/

unsigned char	ft_swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
