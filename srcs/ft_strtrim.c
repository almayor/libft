/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:57:03 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 20:10:53 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_trimmable(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

/*
** Allocates (with `malloc`) and returns a copy of the string
** given as argument without whitespaces at the beginning or at
** the end of the string. Will be considered as whitespaces the
** following characters ``' '``, ``'\n'`` and ``'\t'``. If `s` has no
** whitespaces at the beginning or at the end, the function returns a
** copy of `s`. If the allocation fails the function returns `NULL`.
** @param s The string to be trimmed.
** @return The “fresh” trimmed string or a copy of `s`.
*/

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (is_trimmable(s[i]))
		i++;
	if (s[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s) - 1;
	while (is_trimmable(s[j]))
		j--;
	return (ft_strsub(s, i, j - i + 1));
}
