/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:01:03 by rokamen-          #+#    #+#             */
/*   Updated: 2023/09/27 15:01:27 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_word_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && !(str[i] == c))
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	iter;

	iter = 0;
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[iter] != '\0' && iter < n)
	{
		*(dest + iter) = *(src + iter);
		iter++;
	}
	while (iter < n)
	{
		*(dest + iter) = '\0';
		iter++;
	}
	dest[iter] = '\0';
	return (dest);
}

char	**free_ptr_arr(char **ptr)
{
	int	i;

	if (!ptr)
		return (NULL);
	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

int	get_num_words(char *str, char c)
{
	int	i;
	int	rtn;

	i = 0;
	rtn = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			rtn++;
		i++;
	}
	return (rtn);
}

char	**ft_split(char *str, char c)
{
	int		istr;
	char	**rtn;
	int		irtn;

	istr = 0;
	irtn = 0;
	rtn = malloc(sizeof(char *) * (get_num_words(str, c) + 1));
	if (!rtn || !str)
		return (NULL);
	while (str[istr])
	{
		if (!(str[istr] == c) && (istr == 0 || (str[istr - 1] == c)))
		{
			rtn[irtn] = malloc(sizeof(char) * (ft_get_word_len(str + istr, c)
						+ 1));
			if (!rtn[irtn])
				return (free_ptr_arr(rtn));
			ft_strncpy(rtn[irtn], str + istr,
				(unsigned)ft_get_word_len(str + istr, c));
			irtn++;
		}
		istr++;
	}
	rtn[irtn] = NULL;
	return (rtn);
}
