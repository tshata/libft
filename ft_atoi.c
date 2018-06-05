/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 12:24:20 by tshata            #+#    #+#             */
/*   Updated: 2018/06/04 11:00:50 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_iswhitespace(int s)
{
	return (s == ' ' || s == '\n' || s == '\t' || s == '\f'
			|| s == '\a' || s == '\b' || s == '\v' || s == '\r');
}

int			ft_atoi(const char *str)
{
	int		i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_iswhitespace(str[i]))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (long)str[i] - '0';
		i++;
	}
	return (result * sign);
}
