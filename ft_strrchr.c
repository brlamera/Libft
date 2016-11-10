/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 23:28:19 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:18:12 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locate the last occurence of c in string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (c == s[i])
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
