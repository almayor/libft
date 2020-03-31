/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrinstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 22:54:18 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:31:05 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Search for a character in a string.
** @param c The character for which to search.
** @param str The string in which to search.
** @return `1` if the string contains the character and `0` otherwise.
*/

int		ft_chrinstr(char c, const char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
