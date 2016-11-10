/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlamera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:47:39 by brlamera          #+#    #+#             */
/*   Updated: 2016/11/10 05:12:59 by brlamera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Display the character n on the file descriptor.
*/

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (fd < 1)
		return ;
	if (nb == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr_fd((nb / 10), fd);
			ft_putnbr_fd((nb % 10), fd);
		}
		else
			ft_putchar_fd(nb + '0', fd);
	}
}
