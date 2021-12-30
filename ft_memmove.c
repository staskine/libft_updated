/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:38:51 by staskine          #+#    #+#             */
/*   Updated: 2021/11/29 10:55:31 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str_des;
	unsigned char	*str_src;

	str_des = (unsigned char *)des;
	str_src = (unsigned char *)src;
	i = 0;
	if (!src && !des)
		return (NULL);
	if (src < des)
	{
		while (n > 0)
		{
			n--;
			str_des[n] = str_src[n];
		}
	}
	else
	{
		ft_memcpy(des, src, n);
	}
	return (des);
}
