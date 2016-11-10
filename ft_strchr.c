/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:14:03 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:14:05 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locate character in string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while ((s && s[i]) && c != s[i])
		i++;
	if (c == s[i])
		return ((char *)s + i);
	s++;
	return (NULL);
}
