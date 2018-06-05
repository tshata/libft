/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 12:34:12 by tshata            #+#    #+#             */
/*   Updated: 2018/06/05 13:33:35 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = ft_memalloc(size);
	if (str == NULL)
		return (NULL);
	ft_memset(str, (int)'\0', size + 1);
	return (str);
}
