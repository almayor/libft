/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:16:34 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 20:34:57 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static size_t	ft_len(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

static char		*ft_itoa_intmin(int n)
{
	char	*s1;
	char	*s2;
	char	*str;

	s1 = ft_itoa(n / 10);
	s2 = ft_itoa(-(n % 10));
	str = ft_strjoin(s1, s2);
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	return (str);
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

	len = ft_len(n);
	tmp = n;
	if (n == INT_MIN)
		return (ft_itoa_intmin(n));
	if (n < 0)
	{
		tmp = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = tmp % 10 + '0';
	while (tmp /= 10)
		str[--len] = tmp % 10 + '0';
	if (n < 0)
		str[--len] = '-';
	return (str);
}
