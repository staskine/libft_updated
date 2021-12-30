/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:25:07 by staskine          #+#    #+#             */
/*   Updated: 2021/11/24 06:55:41 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *des, const char *src, size_t n)
{
	int		len;
	size_t	i;

	len = ft_strlen(des);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		des[len] = src[i];
		len++;
		i++;
	}
	des[len] = '\0';
	return (des);
}
