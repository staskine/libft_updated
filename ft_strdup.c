/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:27:32 by staskine          #+#    #+#             */
/*   Updated: 2021/12/29 13:36:16 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*des;

	i = 0;
	len = (ft_strlen(src));
	des = (char *)malloc(sizeof(char) * (len + 1));
	if (des == NULL)
		return (0);
	while (i < len)
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
