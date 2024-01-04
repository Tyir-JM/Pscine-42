/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucamba <jlucamba@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:56:32 by jlucamba          #+#    #+#             */
/*   Updated: 2024/01/02 15:57:36 by jlucamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
	return (1);
}

/*#include <stdio.h>

int main() {
    int base = 3;
    int expoente = 0;
    int resultado = ft_recursive_power(base, expoente);
    printf("%d elevado a %d é: %d\n", base, expoente, resultado);
    return 0;
}*/
