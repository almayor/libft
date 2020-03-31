/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:33:19 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:39:23 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Mimic behaviour of a function of the same name (sans `ft_`) from `libc`.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *s1u;
	unsigned char *s2u;

	s1u = (unsigned char *)s1;
	s2u = (unsigned char *)s2;
	while ((*s1u || *s2u) && n-- > 0)
	{
		if (*s1u - *s2u)
			return (*s1u - *s2u);
		s1u++;
		s2u++;
	}
	return (0);
}
