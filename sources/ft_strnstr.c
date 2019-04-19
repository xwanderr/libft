/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:29:04 by ysizarie          #+#    #+#             */
/*   Updated: 2019/04/19 22:59:53 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;

	if (*s2 == '\0')
		return ((char*)s1);
	i = 0;
	if (s1 && s2 && len > 0)
		while (s1[i] != '\0' && i < len)
		{
			j = 0;
			while (s2[j] == s1[i + j])
			{
				if (i + j == len)
					return (0);
				if (s2[j + 1] == '\0')
					return ((char*)&s1[i]);
				j++;
			}
			i++;
		}
	return (0);
}
