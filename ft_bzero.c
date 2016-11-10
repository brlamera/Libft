/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 03:45:49 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 03:45:51 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Write n zeroed bytes to the string s.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*s2;

	i = 0;
	s2 = (char *)s;
	while (i < n)
	{
		s2[i] = 0;
		i++;
	}
}
