/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.unit.ua>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 09:25:18 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/21 22:49:32 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the string passed as argument,
** and passing its index as first argument.
** Each character is passed by address to f to be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char *clone;

	if (s && f)
	{
		clone = s;
		while (*s)
		{
			f(s - clone, s);
			s++;
		}
	}
}
