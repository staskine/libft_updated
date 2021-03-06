/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staskine <staskine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:10:16 by staskine          #+#    #+#             */
/*   Updated: 2021/12/29 12:12:23 by staskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_link;

	new_link = (t_list *)malloc(sizeof(t_list));
	if (!new_link)
		return (NULL);
	if (!content || !content_size)
	{
		new_link->content = NULL;
		new_link->content_size = 0;
		new_link->next = NULL;
		return (new_link);
	}
	new_link->content_size = content_size;
	new_link->content = ft_memalloc(content_size);
	if (!new_link->content)
		return (NULL);
	new_link->content = ft_memcpy(new_link->content, content, content_size);
	new_link->next = NULL;
	return (new_link);
}
