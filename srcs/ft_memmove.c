/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:24:03 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:41:04 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Mimic behaviour of a function of the same name (sans `ft_`) from `libc`.
*/

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (!dst && !src)
		return (NULL);
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (n > 0)
	{
		if (s1 < s2)
			*(s1++) = *(s2++);
		else
			s1[n - 1] = s2[n - 1];
		n--;
	}
	return (dst);
}
