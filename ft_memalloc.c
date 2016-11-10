/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 04:48:30 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:10:07 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocate and return a "fresh" memory zone.
*/

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
