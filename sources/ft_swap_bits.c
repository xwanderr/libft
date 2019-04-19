/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 17:55:05 by ysizarie          #+#    #+#             */
/*   Updated: 2018/11/02 17:55:17 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function swaps first and last 4 bits in the char.
*/

unsigned char	ft_swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}