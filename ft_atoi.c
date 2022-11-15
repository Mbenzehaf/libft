/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:03:09 by mben-zeh          #+#    #+#             */
/*   Updated: 2022/10/24 23:11:56 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_overlong(unsigned long long n, int sign)
{
	if (n > INT64_MAX && sign > 0)
		return (-1);
	else if (n > INT64_MAX && sign < 0)
		return (0);
	return ((int)n * sign);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	n;

	n = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	return (ft_overlong(n, sign));
}
