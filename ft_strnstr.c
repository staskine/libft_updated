/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:01:18 by staskine          #+#    #+#             */
/*   Updated: 2021/12/29 12:32:33 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *hs, const char *nd, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (nd[i] == '\0' || ft_strcmp(hs, nd) == 0)
		return ((char *)hs);
	while (hs[i] != '\0' && len > i)
	{
		while (nd[j] == hs[i + j] && hs[j + i] != '\0' && (j + i) < len)
		{
			j++;
			if (nd[j] == '\0')
				return ((char *)&hs[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
