/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:21:54 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/24 15:40:36 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The atoi() function converts the initial portion of the string pointed to by
** str to int representation.
*/

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	short int	i;
	int			tmp;
	long int	res;
	short int	negative;

	i = 0;
	tmp = 0;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	negative = (str[i] == '-') ? -1 : 1;
	i = (str[i] == '+' || str[i] == '-') ? i + 1 : i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		tmp = (res != 0) ? tmp + 1 : tmp;
		i++;
	}
	if (tmp > 19 && negative == -1)
		return (0);
	if (tmp > 18 && negative == 1)
		return (-1);
	return (res * negative);
}
