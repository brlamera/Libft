/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:13:31 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:13:34 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concatenate strings s1 and s2.
*/

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
