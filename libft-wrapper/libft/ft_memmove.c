/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:36:59 by rokamen-          #+#    #+#             */
/*   Updated: 2023/10/04 18:36:42 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	char	*temp;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	csrc = (char *)src;
	cdest = (char *)dest;
	temp = (char *)malloc(n * sizeof(char));
	i = 0;
	while (i < n)
	{
		if (cdest > csrc)
			cdest[n - i - 1] = csrc[n - i - 1];
		else
			cdest[i] = csrc[i];
		i++;
	}
	free(temp);
	return (dest);
}
