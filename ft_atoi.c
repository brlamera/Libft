/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 05:11:01 by blameran          #+#    #+#             */
/*   Updated: 2016/05/25 15:28:53 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_res(const char *str, int i, int len)
{
	int power;
	int res;

	res = 0;
	power = 1;
	while (len-- > 0)
	{
		res = res + (str[i] - 48) * power;
		power = power * 10;
		i--;
	}
	if (str[i] == '-')
		res = -res;
	return (res);
}

int			ft_atoi(const char *s)
{
	int	len;
	int	i;

	i = 0;
	while (s[i] != '\0' && (s[i] == '\t' || s[i] == '\n' || s[i] == '\v'
				|| s[i] == '\f' || s[i] == '\r' || s[i] == ' '))
		i++;
	if ((s[i] < 48 || s[i] > 58) && ((s[i] == 43 || s[i] == 45)
				&& (s[i + 1] < 48 || s[i + 1] > 58)))
		return (0);
	if (s[i] == 43 || s[i] == 45)
		i++;
	len = 0;
	while (s[i] < 59 && s[i] > 47)
	{
		len++;
		i++;
	}
	i--;
	return (ft_res(s, i, len));
}
