/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamba>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:33:36 by  jlucamba@studen  #+#    #+#             */
/*   Updated: 2023/12/17 17:44:01 by  jlucamba@studen ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y)
{
	int	e;
	int	g;

	e = 0;
	while (e < y)
	{
		g = 0;
		while (g < x)
		{
			if ((e == 0 && g == 0) || (e == 0 && g == x - 1))
				write (1, "o", 1);
			else if ((e == y -1 && g == x -1) || (e == y -1 && g == 0))
				write (1, "o", 1);
			else if ((g == 0 || g == x - 1))
				write (1, "|", 1);
			else if ((e == 0 || e == y - 1))
				write (1, "-", 1);
			else
				write(1, " ", 1);
			g++;
		}
		write (1, "\n", 1);
		e++;
	}
}
