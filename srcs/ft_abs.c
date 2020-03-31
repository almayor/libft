/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 18:56:00 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:58:14 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

/*
** Return absolute value of an integer.
** @param a The integer of which to take an absolute value
** @return The absolute value or -1 if an overflow occurred.
*/

int	ft_abs(int a)
{
	if (a == INT_MIN)
		return (-1);
	else
		return (a < 0 ? -a : a);
}
