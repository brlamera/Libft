/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:11:19 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:11:21 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy byte string.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned int			i;
	const unsigned char		*s;
	unsigned char			*d;

	i = len - 1;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!len)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(d, s, len));
	while (i + 1 > 0)
	{
		d[i] = s[i];
		i--;
	}
	return ((void*)d);
}
