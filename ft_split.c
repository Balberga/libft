/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:58:40 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 19:27:09 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countw(const char *s, char c)
{
	size_t	i;
	size_t	a;

	a = 0;
	i = 0;
	while (s[a])
	{
		if (s[a] != c)
		{
			i++;
			while (s[a] && s[a] != c)
				a++;
		}
		else
			a++;
	}
	return (i);
}

static void	ft_free(char **string, size_t l)
{
	while (l > 0)
	{
		free(string[l]);
		l--;
	}
	free(string[l]);
	free(string);
}

static char	**ft_alloc(char **string, const char *s, char c, size_t l)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (*s)
	{
		if (*s != c)
		{
			a = 0;
			while (*s && *s != c && ++a)
				s++;
			string[b] = ft_substr(s - a, 0, a);
			if (!string[b])
			{
				ft_free(string, l);
				return (0);
			}
			b++;
		}
		else
			s++;
	}
	string[b] = 0;
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char	**string;
	size_t	l;

	if (!s)
		return (0);
	l = ft_countw(s, c);
	string = (char **)malloc(sizeof(char *) * (l + 1));
	if (!string)
		return (0);
	if (!ft_alloc(string, s, c, l))
		return (0);
	return (string);
}
