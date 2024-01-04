/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucamba <jlucamba@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:45:51 by jlucamba          #+#    #+#             */
/*   Updated: 2024/01/02 15:46:03 by jlucamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_iterative_power(int nb, int power)
{
	int	resultado;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	resultado = 1;
	i = 0;
	while (i < power)
	{
		resultado *= nb;
		i++;
	}
	return (resultado);
}

/*int main() {
    int base = 0;
    int expoente = 0;
    int resultado = ft_iterative_power(base, expoente);
    printf("%d elevado a %d é: %d\n", base, expoente, resultado);

    base = 5;
    expoente = 0;
    resultado = ft_iterative_power(base, expoente);
    printf("%d elevado a %d é: %d\n", base, expoente, resultado);

    base = 3;
    expoente = -2;
    resultado = ft_iterative_power(base, expoente);
    printf("%d elevado a %d é: %d\n", base, expoente, resultado);

    return 0;
}*/
