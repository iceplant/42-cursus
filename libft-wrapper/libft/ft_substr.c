/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:36:26 by rokamen-          #+#    #+#             */
/*   Updated: 2023/10/04 18:41:31 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*rtn;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_strlen(s) > start && s[start + i] && i < len)
		i++;
	rtn = malloc(i + 1);
	if (!rtn)
		return (NULL);
	j = 0;
	while (j < i)
	{
		rtn[j] = s[start + j];
		j++;
	}
	rtn[j] = '\0';
	return (rtn);
}
