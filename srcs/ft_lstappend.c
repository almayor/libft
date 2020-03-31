/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:44:32 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:34:23 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element new at the end of the list.
** @param alst The address of a pointer to the first link of a list.
** @param new The link to add at the beginning of the list.
*/

void	ft_lstappend(t_list **alst, t_list *new)
{
	t_list	*last;

	if (!alst || !new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	last = ft_lstlast(*alst);
	last->next = new;
}
