/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 19:28:55 by blameran          #+#    #+#             */
/*   Updated: 2016/05/24 17:36:38 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*pe;
	int		louse;

	pe = malloc(sizeof(char) * len + 1);
	louse = 0;
	if (!pe)
		return (NULL);
	while (louse != len)
	{
		pe[louse] = s[start + louse];
		louse++;
	}
	pe[louse] = '\0';
	return (pe);
}
