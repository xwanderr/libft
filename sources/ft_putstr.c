/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:21:11 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 21:00:50 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the standard output.
*/

#include "../includes/libft.h"

void	ft_putstr(char const *s)
{
	if (s)
		write(STDOUT_FILENO, s, ft_strlen(s));
}
