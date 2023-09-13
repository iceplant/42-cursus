/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:32:57 by rokamen-          #+#    #+#             */
/*   Updated: 2023/09/13 11:48:19 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void *memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (i < (int) len)
	{
		((char*) b)[i] = c;
		i++;
	}
	return b;
}
