/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:57:28 by staskine          #+#    #+#             */
/*   Updated: 2021/12/09 12:22:21 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void	*str;
	char	*str2;

	str = ft_memalloc(size + 1);
	if (!str)
		return (NULL);
	str2 = (char *)str;
	str2[size] = '\0';
	return (str2);
}
