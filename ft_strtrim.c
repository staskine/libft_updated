/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:56:39 by staskine          #+#    #+#             */
/*   Updated: 2021/12/29 17:11:07 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		length;
	int		orig;

	length = ft_strlen(s);
	orig = 0;
	while (ft_iswhitespc(s[orig]) == 1)
		orig++;
	if (s[orig] == '\0' || !s)
		return (ft_strnew(0));
	while (ft_iswhitespc(s[length - 1]) == 1)
		length--;
	str = ft_strsub(s, orig, (length - orig));
	return (str);
}
