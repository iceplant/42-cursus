/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:05:43 by rokamen-          #+#    #+#             */
/*   Updated: 2023/09/21 16:06:14 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strjoin_helper(char const *s1, char const *s2, char *rtn)
{
	int		i;
	int		s1_len;
	int		s2_len;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	while (i < s1_len + s2_len)
	{
		if (i < s1_len)
			rtn[i] = s1[i];
		else
			rtn[i] = s2[i - s1_len];
		i++;
	}
	rtn[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rtn;
	int		s1_len;
	int		s2_len;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return ((char *) s2);
	if (!s2)
		return ((char *) s1);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	rtn = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!rtn)
		return (NULL);
	ft_strjoin_helper(s1, s2, rtn);
	return (rtn);
}
