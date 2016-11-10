/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 05:12:03 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:12:04 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Write the character c on the file descriptor.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 1)
		return ;
	write(fd, &c, 1);
}
