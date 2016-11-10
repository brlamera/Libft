/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:10:17 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:10:21 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy string until character found.
*/

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
