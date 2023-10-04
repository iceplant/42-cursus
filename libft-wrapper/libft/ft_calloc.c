/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:12:37 by rokamen-          #+#    #+#             */
/*   Updated: 2023/10/04 18:33:41 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*rtn;
	size_t	i;

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
