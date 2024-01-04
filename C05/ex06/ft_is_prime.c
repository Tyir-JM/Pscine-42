/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucamba <jlucamba@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:38:45 by jlucamba          #+#    #+#             */
/*   Updated: 2024/01/02 19:38:46 by jlucamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (div <= nb / div)
	{
		if (nb % div == 0)
		{
			return (0);
		}
		div++;
	}
	return (1);
}
/*#include <stdio.h>
int main() {
    int numero1 = 2147483647;
    int resultado1 = ft_is_prime(numero1);
    printf("%d %s primo.\n", numero1, resultado1 ? "é" : "não é");

    int numero2 = 25;
    int resultado2 = ft_is_prime(numero2);
    printf("%d %s primo.\n", numero2, resultado2 ? "é" : "não é");

    int numero3 = 2;
    int resultado3 = ft_is_prime(numero3);
    printf("%d %s primo.\n", numero3, resultado3 ? "é" : "não é");

    int numero4 = 0;
    int resultado4 = ft_is_prime(numero4);
    printf("%d %s primo.\n", numero4, resultado4 ? "é" : "não é");

    return 0;
}*/
