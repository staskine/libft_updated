/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:13:49 by staskine          #+#    #+#             */
/*   Updated: 2021/12/29 16:18:08 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *des, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_des;
	unsigned char	*str_src;

	i = 0;
	str_des = (unsigned char *)des;
	str_src = (unsigned char *)src;
	if (!src && !des)
		return (NULL);
	while (i < n)
	{
		str_des[i] = str_src[i];
		if (str_src[i] == (unsigned char)c)
		{
			return (des + i + 1);
		}
		i++;
	}
	return (NULL);
}
