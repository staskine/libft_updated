/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:40:54 by staskine          #+#    #+#             */
/*   Updated: 2021/12/17 18:08:29 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *str, char c)
{
	int	num;
	int	i;

	num = 0;
	i = 1;
	if (str[0] == '\0')
		return (0);
	if (str[0] != c)
		num++;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			if (str[i - 1] == c)
				num++;
		}
		i++;
	}
	return (num);
}

static size_t	ft_wordlength(char const *s, int i, char c)
{
	size_t	length;

	length = 0;
	while (s[i] != c && s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

static char	*ft_strnewcpy(const char *src, char *des, int i, size_t length)
{
	int	dest;

	dest = 0;
	while (length > 0)
	{
		des[dest] = src[i];
		i++;
		dest++;
		length--;
	}
	return (des);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		j;
	int		i;
	size_t	length;

	array = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (ft_wordcount(s, c) > j)
	{
		while (s[i] == c)
			i++;
		length = ft_wordlength(s, i, c);
		array[j] = ft_strnew(length);
		if (!array[j])
			return (ft_freearray(array, ft_wordcount(s, c) + 1));
		if (s[i] != c)
			array[j] = ft_strnewcpy(s, array[j], i, length);
		i = i + length;
		j++;
	}
	array[j] = 0;
	return (array);
}
