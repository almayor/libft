/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:48:17 by unite             #+#    #+#             */
/*   Updated: 2020/03/31 18:36:36 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Computes an integer square root of a given number.
** @param num The number of which to take a square root.
** @return The integer square root, or `-1` if it doesn't exit.
*/

int	ft_sqrt(int num)
{
	int factor;

	if (num < 0 ||
		(num % 2 == 0 && num % 4 != 0) ||
		(num % 3 == 0 && num % 9 != 0))
		return (-1);
	factor = (num % 2) ? 1 : 0;
	while (factor < num / 2)
	{
		if (factor * factor == num)
			return (factor);
		factor += 2;
	}
	return (-1);
}
