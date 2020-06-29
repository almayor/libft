/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 18:24:54 by unite             #+#    #+#             */
/*   Updated: 2020/06/29 17:10:35 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
** Replicates behaviour of a function of the same name (sans `ft_`) from `libc`.
*/

int	ft_puts(const char *s)
{
	return (write(1, s, ft_strlen(s)));
}
