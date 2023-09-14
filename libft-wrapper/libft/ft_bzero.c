/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:09:59 by rokamen-          #+#    #+#             */
/*   Updated: 2023/09/14 17:31:04 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len);

/*
void *ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while ((size_t) i < len)
	{
		((char*) b)[i] = c;
		i++;
	}
	return b;
} */

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
