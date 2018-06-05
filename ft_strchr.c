/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:58:29 by tshata            #+#    #+#             */
/*   Updated: 2018/06/04 13:10:00 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*src;

	src = (char *)s;
	i = 0;
	while (src[i])
	{
		if (src[i] == (char)c)
		{
			return (src + i);
		}
		i++;
		if (src[i] == '\0' && c == '\0')
			return (src + i);
	}
	return (NULL);
}
