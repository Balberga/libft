/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:59:30 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:31:25 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	l;

	if (!s1 || !s2)
		return (0);
	l = ft_strlen(s1) + ft_strlen(s2);
	string = (char *)malloc(sizeof(char) * l + 1);
	if (!string)
		return (0);
	ft_strlcpy(string, s1, l + 1);
	ft_strlcat(string, s2, l + 1);
	return (string);
}
