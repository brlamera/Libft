/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:15:02 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:15:03 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Save a copy of a string.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	int			i;

	i = 0;
	if (!(s2 = malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
