/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:26:24 by rokamen-          #+#    #+#             */
/*   Updated: 2023/09/19 13:29:09 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	c_char;

	i = ft_strlen(s);
	c_char = c;
	while (i >= 0)
	{
		if (s[i] == c_char)
			return ((char *)(s + i));
		i--;
	}

	return (NULL);
}
