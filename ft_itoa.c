/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:56:30 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:11:26 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_number(char *s, long num, size_t i, int symbol)
{
	unsigned char	a;

	s[i + symbol] = 0;
	if (symbol)
		s[0] = '-';
	while (i-- > 0)
	{
		a = 48 + (num % 10);
		s[i + symbol] = a;
		num /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	i;
	long	num;
	int		symbol;

	symbol = 0;
	num = (long)n;
	i = 0;
	if (n < 0)
	{
		symbol = 1;
		num *= -1;
	}
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	i++;
	s = (char *)malloc(i + symbol + 1);
	if (!s)
		return (0);
	s = ft_number(s, num, i, symbol);
	return (s);
}
