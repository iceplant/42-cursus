/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:20:41 by rokamen-          #+#    #+#             */
/*   Updated: 2023/09/22 16:21:54 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_char_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	if (!set || !*set)
		return (0);
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !*s1)
		return (ft_strdup(""));
	while (s1[start] && ft_is_char_in_set(s1[start], set))
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	end = ft_strlen((char *)s1) - 1;
	while (end > 0 && ft_is_char_in_set(s1[end], set))
		end--;
	end++;
	return (ft_substr(s1, start, end - start));
}
