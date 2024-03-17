/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:13:24 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:39:36 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*tmp;
	unsigned char	a;

	a = c;
	tmp = 0;
	while (*s)
	{
		if (*s == a)
			tmp = (char *)s;
		s++;
	}
	if (!a)
		tmp = (char *)s;
	if (!tmp)
		return (0);
	return (tmp);
}
