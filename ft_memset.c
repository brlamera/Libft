/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:11:30 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:11:32 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Fill a byte string with a byte value.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	a;
	char			*b;
	unsigned int	i;

	i = 0;
	a = ((char)c);
	b = (char*)s;
	while (i < n)
	{
		b[i] = a;
		i++;
	}
	return (s);
}
