/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 11:54:57 by tshata            #+#    #+#             */
/*   Updated: 2018/06/04 10:06:47 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = (void *)malloc(sizeof(void) * size + 1);
	if (!mem || size > sizeof(void) * size + 1)
		return (0);
	else
		ft_memset(mem, 0, size);
	return (mem);
}
