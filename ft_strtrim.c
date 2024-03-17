/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:00:56 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 18:00:57 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		startstr;
	int		endstr;
	char	*str;

	if (!s1 || !set)
		return (0);
	startstr = 0;
	endstr = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[startstr]) && startstr <= endstr)
		startstr++;
	if (startstr > endstr)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[endstr]) && endstr >= 0)
		endstr--;
	str = (char *)malloc(sizeof(char) * (endstr - startstr + 2));
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + startstr, endstr - startstr + 2);
	return (str);
}
