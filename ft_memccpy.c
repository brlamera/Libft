/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 04:17:52 by blameran          #+#    #+#             */
/*   Updated: 2016/05/25 14:47:52 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	char				*d;
	char				*s;
	unsigned int		uc;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	uc = (unsigned char)c;
	while (n > 0)
	{
		d[i] = s[i];
		if ((unsigned char)s[i] == uc)
			return (dst + i + 1);
		i++;
		n--;
	}
	return (NULL);
}
