/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:21:22 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 20:58:35 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the file descriptor fd.
*/

#include "../includes/libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s && fd >= 0)
		write(fd, s, ft_strlen(s));
}
