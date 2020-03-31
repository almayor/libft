/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:50:06 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:36:27 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Outputs the string `s` to the standard output.
** @param s The string to output.
*/

void	ft_putstr(char const *s)
{
	ft_putstr_fd(s, 1);
}
