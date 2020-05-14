/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:49:21 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:08:50 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with `malloc`) and returns a “fresh” substring
** from the string given as argument. The substring begins at
** index `start` and is of size `len`. If `start` and `len` aren’t refering to
** a valid substring, the behavior is undefined. If the
** allocation fails, the function returns `NULL`.
** @param s The string from which create the substring.
** @param start The start index of the substring.
** @param len The size of the substring.
** @return The substring.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s ||
		!(sub = ft_strnew(len)))
		return (NULL);
	ft_strncpy(sub, s + start, len);
	return (sub);
}
