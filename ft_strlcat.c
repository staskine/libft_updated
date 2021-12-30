/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 06:05:18 by staskine          #+#    #+#             */
/*   Updated: 2021/11/24 06:59:30 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *des, const char *src, size_t size)
{
	size_t	lendes;
	size_t	len;
	size_t	i;

	lendes = ft_strlen(des);
	i = 0;
	if (size < lendes)
		len = (size + ft_strlen(src));
	else
		len = (lendes + ft_strlen(src));
	while ((lendes + 1) < size && src[i] != '\0')
	{
		des[lendes] = src[i];
		i++;
		lendes++;
	}
	des[lendes] = '\0';
	return (len);
}
