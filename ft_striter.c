/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:15:26 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:15:27 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Apply the function f to each character of the string s.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return ;
	if (s)
		while (*s)
			f(&*s++);
}
