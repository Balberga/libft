/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <balberga@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:21:36 by balberga          #+#    #+#             */
/*   Updated: 2024/03/17 20:20:32 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*l;
	t_list	*nodelist;

	if (!lst || !f || !del)
		return (0);
	l = (0);
	while (lst)
	{
		nodelist = ft_lstnew(f(lst->content));
		if (!nodelist)
		{
			ft_lstclear(&lst, del);
			return (0);
		}
		ft_lstadd_back(&l, nodelist);
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (l);
}
