/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:19:20 by rokamen-          #+#    #+#             */
/*   Updated: 2023/10/04 18:34:18 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(int n)
{
	size_t	rtn;

	rtn = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		rtn++;
	while (n)
	{
		n /= 10;
		rtn++;
	}
	return (rtn);
}

char	*ft_itoa(int n)
{
	char	*rtn;
	size_t	i;

	if (n == 0)
		return (ft_strdup("0"));
	rtn = malloc(sizeof(char) * int_len(n) + 1);
	if (!rtn)
		return (NULL);
	i = int_len(n) - 1;
	rtn[i + 1] = '\0';
	if (n < 0)
		rtn[0] = '-';
	while (n)
	{
		if (n < 0)
			rtn[i] = (-1) * (n % 10) + '0';
		else
			rtn[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (rtn);
}
