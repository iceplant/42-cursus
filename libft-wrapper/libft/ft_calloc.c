/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:12:37 by rokamen-          #+#    #+#             */
/*   Updated: 2023/09/20 17:24:42 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*rtn;
	size_t	i;

	printf("\n\ncount: %zu\n", count);
	printf("size: %zu\n", size);
	rtn = malloc(count * size);
	if (!rtn)
		return (NULL);
	i = 0;
	while (i < (size * count))
	{
		rtn[i] = '\0';
		i++;
	}
	return (rtn);
}
