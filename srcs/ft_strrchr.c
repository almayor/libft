/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 23:31:57 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:41:54 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Mimic behaviour of a function of the same name (sans `ft_`) from `libc`.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	last;
	int		found;

	i = 0;
	last = 0;
	found = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			last = i;
			found = 1;
		}
		i++;
	}
	if (found)
		return ((char *)(s + last));
	else if (c == 0)
		return ((char *)(s + i));
	else
		return (NULL);
}
