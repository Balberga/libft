/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:08:50 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:33:19 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstl;
	size_t	a;
	size_t	srcl;

	a = 0;
	if (size == 0)
	{
		srcl = ft_strlen(src);
		return (srcl);
	}
	srcl = ft_strlen(src);
	dstl = ft_strlen(dst);
	while ((a + dstl) < (size - 1) && src[a])
	{
		dst[dstl + a] = src[a];
		a++;
	}
	if (dstl < size)
		dst[dstl + a] = '\0';
	else
		return (srcl + size);
	return (dstl + srcl);
}
