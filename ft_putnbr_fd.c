/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:54:25 by eblackbu          #+#    #+#             */
/*   Updated: 2019/09/06 15:45:03 by eblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_recursive_out_fd(int n, int fd)
{
	if (n / 10)
		ft_recursive_out_fd(n / 10, fd);
	ft_putchar_fd((unsigned char)(n % 10 + '0'), fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar_fd('-', fd);
		}
		ft_recursive_out_fd(n, fd);
	}
}
