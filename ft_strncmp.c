/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:03:15 by tshata            #+#    #+#             */
/*   Updated: 2018/06/05 09:09:33 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	if (i == n)
		return (0);
	while ((i < n) && (str1[i] == str2[i]) &&
			(str1[i] != '\0' || str2[i] != '\0'))
	{
		i++;
		if (i == n)
		{
			i--;
			break ;
		}
	}
	return (str1[i] - str2[i]);
}
