/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:52:43 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:35:47 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Outputs the char `c` to the file descriptor `fd`.
** @param c The character to output.
** @param fd The file descriptor.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
