/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:43:09 by mben-zeh          #+#    #+#             */
/*   Updated: 2022/10/24 23:04:50 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str && !len)
		return (0);
	if (!*to_find || str == to_find)
		return ((char *)str);
	while (str[i] && i < len)
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && i + j < len && to_find[j])
				j++;
			if (!to_find[j])
				return ((char *)str + i);
			j = 0;
		}
		i++;
	}
	return (0);
}
