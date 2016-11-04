/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 06:20:04 by blameran          #+#    #+#             */
/*   Updated: 2016/05/25 15:26:53 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	a;
	char			*s2;
	unsigned int	i;

	i = 0;
	a = ((char)c);
	s2 = (char*)s;
	while (i < n)
	{
		s2[i] = a;
		i++;
	}
	return (s);
}
