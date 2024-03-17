/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:13:24 by balberga          #+#    #+#             */
/*   Updated: 2024/03/16 19:13:48 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*temp;
	unsigned char	uc;

	uc = c;
	temp = 0;
	while (*s)
	{
		if (*s == uc)
			temp = (char *)s;
		s++;
	}
	if (!uc)
		temp = (char *)s;
	if (!temp)
		return (0);
	return (temp);
}
