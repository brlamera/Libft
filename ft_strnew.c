/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:17:56 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:17:56 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Make a new string.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_s;

	if (!(new_s = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_strclr(new_s);
	return (new_s);
}
