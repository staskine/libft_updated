/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:53:12 by staskine          #+#    #+#             */
/*   Updated: 2021/11/23 13:17:44 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *des, const char *src)
{
	int	len;
	int	i;

	len = ft_strlen(des);
	i = 0;
	while (src[i] != '\0')
	{
		des[len] = src[i];
		len++;
		i++;
	}
	des[len] = '\0';
	return (des);
}
