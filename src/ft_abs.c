/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 02:02:23 by unite             #+#    #+#             */
/*   Updated: 2020/05/17 02:10:12 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the absolute value of the argument.
** @note This function is only needed, since "The Norme" (the code standard
** at School 42) forbids the use of parametrized macros; hence this is an inline
** function.
** @param[in] a The integer to take an absolute value of.
*/

inline int	ft_abs(int a)
{
	return (a < 0 ? -a : a);
}
