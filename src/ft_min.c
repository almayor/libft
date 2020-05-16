/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 02:02:23 by unite             #+#    #+#             */
/*   Updated: 2020/05/17 02:10:38 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the minimum of two integer arguments.
** @note This function is only needed, since "The Norme" (the code standard
** at School 42) forbids the use of parametrized macros; hence this is an inline
** function.
** @param[in] a The first integer to compare.
** @param[in] b The second integer to compare.
** @return The smaller of the two integers.
*/

inline int	ft_min(int a, int b)
{
	return (a < b ? a : b);
}
