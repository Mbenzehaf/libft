/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:04:52 by mben-zeh          #+#    #+#             */
/*   Updated: 2022/10/24 23:35:53 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strfind(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && !ft_strfind(s1[start], (char *)set))
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	while (!ft_strfind(s1[end - 1], (char *)set))
		end--;
	if (start > end)
		return (0);
	str = ft_substr(s1, start, end - start);
	return (str);
}
