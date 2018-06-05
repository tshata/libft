/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:55:06 by tshata            #+#    #+#             */
/*   Updated: 2018/06/05 08:43:12 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest,const char *src)
{
	char		*c_dest;
	const char	*c_src;
	
	c_dest = dest;
	c_src = src;
	while ((*c_dest++ = *c_src++) != '\0')
		;
	return (dest);
}
