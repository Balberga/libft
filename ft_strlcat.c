/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:08:50 by balberga          #+#    #+#             */
/*   Updated: 2024/03/16 19:09:27 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	i;
	size_t	srclen;

	i = 0;
	if (size == 0)
	{
		srclen = ft_strlen(src);
		return (srclen);
	}
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	while ((i + dstlen) < (size - 1) && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstlen < size)
		dst[dstlen + i] = '\0';
	else
		return (srclen + size);
	return (dstlen + srclen);
}
