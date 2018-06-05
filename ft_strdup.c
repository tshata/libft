/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:56:57 by tshata            #+#    #+#             */
/*   Updated: 2018/06/04 09:57:28 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)ft_strnew(ft_strlen((char *)s) * sizeof(char));
	if (str)
	{
		while (s[i])
		{
			str[i] = s[i];
			i++;
		}
		str[i] = s[i];
		return (str);
	}
	return (NULL);
}
