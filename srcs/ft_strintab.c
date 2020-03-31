/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strintab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 23:26:15 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:38:52 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** Perform lexicographical comparison between a given string and strings
** contained in a `NULL`-terminated tab. If the tab contains
** an identical string, the function returns `1`, or `0` otherwise.
** @param str The string to search for.
** @param tab The `NULL`-terminated tab to search in.
** @return `1` or `0` depending on whether the tab contains an identical string.
*/

int	ft_strintab(const char *str, char *const tab[])
{
	while (*tab)
	{
		if (ft_strequ(str, *tab))
			return (1);
		tab++;
	}
	return (0);
}
