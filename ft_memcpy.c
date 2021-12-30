/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 08:56:02 by staskine          #+#    #+#             */
/*   Updated: 2021/11/29 10:50:38 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str_des;
	unsigned char	*str_src;

	i = 0;
	str_des = (unsigned char *)des;
	str_src = (unsigned char *)src;
	if (!src && !des)
		return (0);
	while (i < n)
	{
		str_des[i] = str_src[i];
		i++;
	}
	return (des);
}
