/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 00:49:32 by unite             #+#    #+#             */
/*   Updated: 2020/05/14 03:02:19 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Lexicographical comparison between `s1` and `s2` up to n characters
** or until a ``'\0'`` is reached. If the 2 strings are identical,
** the function returns `1`, or `0` otherwise.
** @param s1 The first string to be compared.
** @param s2 The second string to be compared.
** @return `1` or `0` according to if the 2 strings are identical or not.
*/

int	ft_strequ(const char *s1, const char *s2)
{
	if (!s1 && !s2)
		return (1);
	else if (!s1 || !s2)
		return (0);
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}
