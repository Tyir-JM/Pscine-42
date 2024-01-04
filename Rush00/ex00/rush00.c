/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamba>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:41:50 by  jlucamba@studen  #+#    #+#             */
/*   Updated: 2023/12/17 16:01:20 by  jlucamba@studen ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write (1, "invalid input", 14);
	}
	ft_putchar (x, y);
}
