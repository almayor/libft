/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 00:38:26 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:38:03 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets every character of the string to the value ``'\0'``.
** @param s The string that needs to be cleared.
*/

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	ft_memset(s, 0, ft_strlen(s));
}
