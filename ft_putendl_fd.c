/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:46:47 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:12:28 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Write the string s on the file descriptor.
*/

#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	int		i;
	char	bs;

	if (fd < 1)
		return ;
	i = 0;
	bs = '\n';
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &bs, 1);
}
