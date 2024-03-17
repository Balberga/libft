/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:20:24 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 20:21:57 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		a;

	if (!lst)
		return (0);
	a = 1;
	while (lst->next)
	{
		lst = lst->next;
		a++;
	}
	return (a);
}
