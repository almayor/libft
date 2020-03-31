/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:53:17 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 19:06:49 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates a list lst and applies the function `f` to each link to
** create a “fresh” list (using `malloc`) resulting from the successive
** applications of f. If the allocation fails, the function
** returns `NULL`.
** @param lst A pointer’s to the first link of a list.
** @param f The address of a function to apply to each link of a list.
** @return The new list.
** @remark This function fails if `f` returns `NULL`;
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = f(lst);
	new = tmp;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = f(lst);
		tmp = tmp->next;
	}
	return (new);
}
