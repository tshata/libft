/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:54:24 by tshata            #+#    #+#             */
/*   Updated: 2018/06/02 13:19:32 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
