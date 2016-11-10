/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:15:35 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:15:36 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Same as striter, with the index.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	if (!s || !f)
		return ;
	i = -1;
	if (s)
		while (s[++i])
			f(i, &s[i]);
}
