/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:51:23 by mben-zeh          #+#    #+#             */
/*   Updated: 2022/10/24 23:59:11 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node ;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		node = *(lst);
		*(lst) = (*lst)->next;
		ft_lstdelone(node, del);
	}
}
