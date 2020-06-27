/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:16:34 by unite             #+#    #+#             */
/*   Updated: 2020/06/27 18:24:21 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static size_t	ft_int_len(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

/*
** Allocate (with `malloc`) and returns a “fresh” string ending with ``'\0'``
** representing the integer n given as argument.
** Negative numbers must be supported. If the allocation fails,
** the function returns `NULL`.
** @param n The integer to be transformed into a string.
** @return The string representing the integer passed as argument.
*/

char			*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		tmp;

	len = ft_int_len(n);
	tmp = n < 0 ? n : -n;
	if (n < 0)
		len++;
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (tmp)
	{
		str[--len] = -(tmp % 10) + '0';
		tmp /= 10;
	}
	if (n < 0)
		str[--len] = '-';
	return (str);
}
