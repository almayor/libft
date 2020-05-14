/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 00:36:27 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:38:34 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a string that need to be freed with
** `free`, then sets its pointer to `NULL`.
** @param as The string’s address that needs to be freed and its pointer set to
** `NULL`.
*/

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}
