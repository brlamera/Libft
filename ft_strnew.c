/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 18:24:56 by blameran          #+#    #+#             */
/*   Updated: 2016/05/12 18:29:08 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_s;

	if (!(new_s = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_strclr(new_s);
	return (new_s);
}
