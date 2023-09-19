/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:36:59 by rokamen-          #+#    #+#             */
/*   Updated: 2023/09/19 12:10:28 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	char	*temp;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	csrc = (char *)src;
	cdest = (char *)dest;
	temp = (char *)malloc(n * sizeof(char));
	i = 0;
	if (cdest > csrc)
	{
		while (i < n)
		{
			cdest[n - i - 1] = csrc[n - i - 1];
			i++;
		}
	}
	else if (cdest < csrc)
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	free(temp);
	return (dest);
}
