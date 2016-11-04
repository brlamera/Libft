/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 02:32:27 by blameran          #+#    #+#             */
/*   Updated: 2016/05/25 15:11:42 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
