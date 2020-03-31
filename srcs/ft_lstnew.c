/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:34:37 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:40:44 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Allocates (with `malloc`) and returns a “fresh” link. The
** variables content and content_size of the new link are initialized by
** copy of the parameters of the function. If the parameter
** `content` is `NULL`, the variable `content` is initialized to
** `NULL` and the variable `content_size` is initialized to `0` even
** if the parameter `content_size` isn’t. The variable `next` is
** initialized to `NULL`. If the allocation fails, the function returns `NULL`.
** @param content The content to put in the new link.
** @param content_size The size of the content of the new link.
** @return The new link.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	if (!(link = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(link->content = ft_memalloc(content_size)))
		{
			ft_memdel((void **)&link);
			return (NULL);
		}
		ft_memcpy(link->content, content, content_size);
		link->content_size = content_size;
	}
	else
	{
		link->content = NULL;
		link->content_size = 0;
	}
	link->next = NULL;
	return (link);
}
