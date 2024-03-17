/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:16:04 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:14:40 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*stra;
	const unsigned char	*strb;

	stra = (const unsigned char *)s1;
	strb = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 0 && *stra == *strb)
	{
		if (--n > 0)
		{
			stra++;
			strb++;
		}
	}
	return (*stra - *strb);
}
