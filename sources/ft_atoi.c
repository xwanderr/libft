/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:21:54 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 23:08:58 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The atoi() function converts the initial portion of the string pointed to by
** str to int representation.
*/

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	X;
	i = 0;
	tmp = 0;
	res = 0;
	negative = 1;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		if (res != 0)
			tmp++;
		i++;
	}
	if (tmp > 19 && negative == -1)
		return (0);
	if (tmp > 18 && negative == 1)
		return (-1);
	return (res * negative);
}
