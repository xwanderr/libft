/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 18:42:36 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/23 21:24:02 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the char c to the file descriptor fd.
*/

#include "../includes/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}
