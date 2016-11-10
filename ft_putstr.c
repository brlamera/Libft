/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:13:09 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:13:10 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Display the string s.
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}
