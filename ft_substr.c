/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:01:09 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:43:41 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*string;
	unsigned int	a;
	unsigned int	l;

	a = 0;
	if (!s)
		return (0);
	l = ft_strlen(s);
	if (start >= l)
		string = ft_strdup("");
	else if (len <= l - start)
		string = (char *)malloc(sizeof(char) * (len + 1));
	else
		string = (char *)malloc(sizeof(char) * (l - start + 1));
	if (!string)
		return (0);
	while (a < len && (a + start) < l)
	{
		string[a] = s[a + start];
		a++;
	}
	string[a] = '\0';
	return (string);
}
