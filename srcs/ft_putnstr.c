/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 22:32:01 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:36:12 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Outputs the first n characters of the string `s` to the standard output.
** @param s The string, the characters of which to output.
** @param n The number of characters to output.
** @remark If `s` contains less than `n` characters, behaviour is undefined.
*/

void	ft_putnstr(char *s, size_t n)
{
	write(1, s, n);
}
