/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 18:49:18 by blameran          #+#    #+#             */
/*   Updated: 2016/05/12 20:57:01 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int			i;
	char		*new_s;

	if (!s || !f || !(new_s = ft_strdup(s)))
		return (NULL);
	i = -1;
	while (new_s[++i])
		new_s[i] = f(i, new_s[i]);
	return (new_s);
}
