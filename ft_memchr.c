/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:56:36 by staskine          #+#    #+#             */
/*   Updated: 2021/12/13 13:24:17 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str2;
	unsigned char	needle;

	i = 0;
	needle = (unsigned char)c;
	str2 = (unsigned char *)str;
	while (i < n)
	{
		if (str2[i] == needle)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
