/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:36:59 by rokamen-          #+#    #+#             */
/*   Updated: 2023/10/04 20:55:43 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	if (dest < src)
	{
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else if (src < dest)
	{
		while (len--)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	}
	return (dest);
}
