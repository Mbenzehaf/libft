/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:30:16 by mben-zeh          #+#    #+#             */
/*   Updated: 2022/10/25 00:17:31 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst,	void *(*f)(void *), void (*del)(void *))
{
	t_list	*heap;
	t_list	*node;

	if (!f || !del)
		return (NULL);
	heap = NULL;
	while (lst)
	{
		node = ft_lstnew((*f)(lst->content));
		if (!node)
		{
			ft_lstclear(&heap, del);
			return (0);
		}
		ft_lstadd_back(&heap, node);
		lst = lst->next;
	}
	return (heap);
}
