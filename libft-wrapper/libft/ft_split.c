/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:01:03 by rokamen-          #+#    #+#             */
/*   Updated: 2023/09/22 17:01:17 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

int	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (1);
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

// str must be a pointer to start of word
int	ft_get_word_len(char *str, char c)
{
	int	i;

	i = 0;
	while (!(str[i] == c))
	{
		i++;
	}
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

//sizeof(char *) = 8
char	**ft_split(char *str, char c)
{
	int		istr;
	char	**rtn;
	int		irtn;

	istr = 0;
	irtn = 0;
	rtn = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!rtn || !str)
		return (NULL);
	while (str[istr])
	{
		if (!(str[istr] == c) && (istr == 0 || (str[istr - 1] == c)))
		{
			rtn[irtn] = malloc(8 * (ft_get_word_len(str + istr, c) + 1));
			if (!rtn[irtn])
				return (NULL);
			ft_strncpy(rtn[irtn], str + istr, (unsigned)ft_get_word_len(str
					+ istr, c));
			irtn++;
		}
		istr++;
	}
	rtn[irtn] = 0;
	return (rtn);
}
