/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 00:30:56 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:35:11 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Takes as a parameter the address of a memory area that needs to be freed with
** `free`, then puts the pointer to `NULL`.
** @param ap A pointer’s address that needs its memory freed and set to `NULL`.
*/

void	ft_memdel(void **ap)
{
	if (!ap || !(*ap))
		return ;
	free(*ap);
	*ap = 0;
}
