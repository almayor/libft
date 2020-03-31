/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:44:25 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:41:58 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with `malloc`) and returns a “reversed” `NULL`-terminated string
** or `NULL` if allocation fails.
**
** Example: `ft_strrev("0123456789")` returns `"9876543210"`
** @param s String to be reversed.
** @return Reversed string.
*/

char	*ft_strrev(const char *s)
{
	size_t	len;
	size_t	i;
	char	*srev;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(srev = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		srev[i] = s[len - i - 1];
		i++;
	}
	return (srev);
}
