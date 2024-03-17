/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:59:30 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 17:59:31 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	totlen;

	if (!s1 || !s2)
		return (0);
	totlen = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * totlen + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, totlen + 1);
	ft_strlcat(str, s2, totlen + 1);
	return (str);
}
