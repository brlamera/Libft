/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 00:24:35 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 03:29:18 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return a string section from the initial string.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*pe;
	size_t	louse;

	if (s == NULL)
		return (NULL);
	if (start > (unsigned long)ft_strlen(s))
		return (NULL);
	if ((pe = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	louse = 0;
	while (louse < len && s[start] != '\0')
	{
		pe[louse] = s[start];
		start++;
		louse++;
	}
	pe[louse] = '\0';
	return (pe);
}
