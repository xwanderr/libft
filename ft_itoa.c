/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:42:21 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/29 16:26:04 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	int		ft_abs(long int nb)
{
	return (nb < 0) ? -nb : nb;
}

static int			ft_nbrlen(long int nb)
{
	int		length;

	length = (nb <= 0) ? 1 : 0;
	while (nb != 0)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

char				*ft_itoa(int nbr)
{
	char	*res;
	int		len;
	int		sign;

	sign = (nbr < 0) ? -1 : 1;
	len = ft_nbrlen((long int)nbr);
	if (!(res = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	res[len] = '\0';
	while (--len >= 0)
	{
		res[len] = '0' + (char)ft_abs(nbr % 10);
		nbr = ft_abs(nbr / 10);
	}
	if (sign == -1)
	{
		res[0] = '-';
	}
	return (res);
}
