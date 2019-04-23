/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:22:21 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 21:22:02 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the standard output followed by a ’\n’.
*/

#include "../includes/libft.h"

void	ft_putendl(char const *s)
{
	if (s)
	{
		write(STDOUT_FILENO, s, ft_strlen(s));
		ft_putchar('\n');
	}
}
