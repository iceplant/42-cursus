/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:17:38 by rokamen-          #+#    #+#             */
/*   Updated: 2023/09/21 14:22:43 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	int	len;
	char *rtn;
	int	i;

	len = ft_strlen(s1);
	rtn = malloc(len + 1);
	if (!rtn)
		return (NULL);
	i = 0;
	while (i < len)
	{
		rtn[i] = s1[i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
