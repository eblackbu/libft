/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:50:13 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/07 15:31:20 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	is_valid(const char *nbr, int flag)
{
	size_t	len;

	len = 0;
	while (nbr[len] >= '0' && nbr[len] <= '9')
		len++;
	if (flag == -1)
	{
		if ((len == 19 && ft_strcmp(nbr, "9223372036854775808") > 0) \
				|| len > 19)
			return (0);
	}
	else
	{
		if ((len == 19 && ft_strcmp(nbr, "9223372036854775807") > 0) \
				|| len > 19)
			return (-1);
	}
	return (1);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		nbr;
	int		flag;

	i = 0;
	nbr = 0;
	flag = 1;
	while (str[i] == 32 || (str[i] < 14 && str[i] > 8))
		i++;
	if (ft_strcmp(str, "-2147483648") == 0)
		return (-2147483648);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	if (is_valid(&str[i], flag) < 1)
		return (is_valid(&str[i], flag));
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	return (nbr * flag);
}
