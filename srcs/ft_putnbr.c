/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:55:46 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:36:03 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the integer `n` to the standard output.
** @param n The integer to output.
*/

void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, 1);
}
