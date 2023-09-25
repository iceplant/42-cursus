/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:45:10 by rokamen-          #+#    #+#             */
/*   Updated: 2023/09/25 20:57:22 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd_helper(int nb, int fd)
{
	int		digit;
	char	c;

	if (nb == 0)
		return ;
	digit = nb % 10;
	c = digit + '0';
	nb /= 10;
	ft_putnbr_fd_helper(nb, fd);
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	int		int_min;
	char	*int_min_str;

	int_min = -2147483648;
	int_min_str = "-2147483648";
	if (nb == 0)
		ft_putchar_fd('0', fd);
	else if (nb == int_min)
		ft_putstr_fd(int_min_str, fd);
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = nb * -1;
		}
		ft_putnbr_fd_helper(nb, fd);
	}
}
