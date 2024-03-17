/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:36:25 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:45:35 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	a;
	size_t	b;
	char	*res;

	a = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (a < n && haystack[a])
	{
		if (haystack[a] == needle[0])
		{
			b = 1;
			res = &((char *)haystack)[a];
			while (needle[b] && haystack[b + a] && b + a < n
				&& needle[b] == haystack[b + a])
				b++;
			if (!needle[b])
				return (res);
		}
		a++;
	}
	return (0);
}
