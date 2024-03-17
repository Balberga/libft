/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:00:09 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:35:49 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*string;
	unsigned int	a;
	size_t			l;

	if (!s || !f)
		return (0);
	a = 0;
	l = ft_strlen(s);
	string = (char *)malloc(l + 1);
	if (!string)
		return (0);
	while (a < l)
	{
		string[a] = f(a, s[a]);
		a++;
	}
	string[a] = 0;
	return (string);
}
