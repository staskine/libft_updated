/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:02:47 by staskine          #+#    #+#             */
/*   Updated: 2021/12/13 12:13:16 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hs, const char *nd)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (nd[i] == '\0' || ft_strcmp(hs, nd) == 0)
		return ((char *)hs);
	while (hs[i] != '\0')
	{
		while (nd[j] == hs[i + j] && hs[i + j] != '\0')
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
