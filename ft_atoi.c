/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:19:13 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 18:44:35 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	a;
	int	number;
	int	symbol;

	number = 0;
	symbol = 1;
	a = 0;
	while ((nptr[a] >= '\t' && nptr[a] <= '\r') || nptr[a] == ' ')
		a++;
	if (nptr[a] == '+')
		a++;
	else if (nptr[a] == '-')
	{
		symbol = -1;
		a++;
	}
	if (nptr[a] < '0' || nptr[a] > '9')
		return (0);
	while (nptr[a] >= '0' && nptr[a] <= '9')
	{
		number *= 10;
		number += (int)(nptr[a++] - '0');
	}
	return (number * symbol);
}
