/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:16:38 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:16:39 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Same as strmap, with the index.
*/

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
