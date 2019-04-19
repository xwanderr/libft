/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysizarie <ysizarie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:25:25 by ysizarie          #+#    #+#             */
/*   Updated: 2018/10/25 15:25:32 by ysizarie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (*(dest + i) != '\0')
		i++;
	while (*(src + k) != '\0')
	{
		*(dest + i + k) = *(src + k);
		k++;
	}
	*(dest + k + i) = '\0';
	return (dest);
}
