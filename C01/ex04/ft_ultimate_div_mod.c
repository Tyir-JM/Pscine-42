/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamb    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:42:54 by  jlucamba@s       #+#    #+#             */
/*   Updated: 2023/12/20 12:56:54 by  jlucamba@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	resto;

	if (b != 0)
	{
		div = *a / *b;
		resto = *a % *b;
		*a = div;
		*b = resto;
	}
}
