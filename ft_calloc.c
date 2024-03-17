/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:55:28 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 18:55:12 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	l;

	if (!size || !nmemb)
	{
		p = malloc(1);
		if (!p)
			return (0);
		l = 1;
	}
	else
	{
		if (UINT_MAX / nmemb < size || SIZE_MAX / nmemb < size)
			return (0);
		l = nmemb * size;
		p = malloc(l);
		if (!p)
			return (0);
	}
	ft_bzero(p, l);
	return (p);
}
