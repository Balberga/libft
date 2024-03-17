/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:59:13 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:29:38 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int	a;
	size_t			l;

	if (!s || !f)
		return ;
	a = 0;
	l = ft_strlen(s);
	while (a < l)
	{
		f(a, &s[a]);
		a++;
	}
}
