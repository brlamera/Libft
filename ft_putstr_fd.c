/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:47:52 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:13:20 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Write the string s on the file descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int		i;

	if (fd < 1)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
