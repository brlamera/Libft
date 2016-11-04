/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 18:17:58 by blameran          #+#    #+#             */
/*   Updated: 2016/05/25 14:40:07 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*c;

	if (!(c = (char *)malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		c[i] = 0;
		i++;
	}
	return (c);
}
