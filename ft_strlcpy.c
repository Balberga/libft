/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:34:40 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:34:25 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	srcl;

	srcl = ft_strlen(src);
	a = 0;
	if (size == 0)
		return (srcl);
	while (a < size - 1 && src[a])
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (srcl);
}
