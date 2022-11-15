/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:40:12 by mben-zeh          #+#    #+#             */
/*   Updated: 2022/10/20 22:49:59 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_nbrlen(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n *= (-1);
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long		r;
	char		*str;
	int			len;
	int			sign;

	r = n;
	sign = 0;
	len = ft_nbrlen(r);
	str = malloc(len + 1);
	if (!str)
		return (0);
	str[len] = 0;
	if (r < 0)
	{
		str[0] = '-';
		r *= (-1);
		len--;
		sign++;
	}
	while (len > 0)
	{
		str[len-- + sign - 1] = r % 10 + 48;
		r /= 10;
	}
	return (str);
}
