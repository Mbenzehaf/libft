/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:42:22 by mben-zeh          #+#    #+#             */
/*   Updated: 2022/10/20 01:51:32 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*src;

	if (size && count * size >= SIZE_MAX)
		return (0);
	src = (void *)malloc(size * count);
	if (!src)
		return (0);
	ft_bzero(src, size * count);
	return (src);
}