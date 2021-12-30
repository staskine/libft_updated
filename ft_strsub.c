/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:05:15 by staskine          #+#    #+#             */
/*   Updated: 2021/12/29 16:12:24 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	end;

	str = ft_memalloc(len + 1);
	if (!str)
		return (NULL);
	end = 0;
	while (len > 0)
	{
		str[end] = s[start];
		end++;
		start++;
		len--;
	}
	str[end] = '\0';
	return (str);
}
