/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:59:02 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:28:48 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*string;

	string = (char *)malloc(ft_strlen(s) + 1);
	if (!string)
		return (0);
	ft_strlcpy(string, s, ft_strlen(s) + 1);
	return (string);
}
