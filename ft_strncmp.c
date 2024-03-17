/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:14:27 by balberga          #+#    #+#             */
/*   Updated: 2024/03/16 19:14:52 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (n > 0 && *s1 && *s2 && *s1 == *s2)
	{
		if (--n)
		{
			s1++;
			s2++;
		}
	}
	return ((unsigned char)*s1 - *s2);
}
