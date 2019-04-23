/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:20:52 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 21:25:01 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the character c to the standard output.
*/

#include "../includes/libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
