/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucamba <jlucamba@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 08:56:02 by jlucamba          #+#    #+#             */
/*   Updated: 2024/01/03 08:56:04 by jlucamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nbr)
{
	int	div;

	div = 2;
	if (nbr <= 1)
	{
		return (0);
	}
	while (div <= nbr / div)
	{
		if (nbr % div == 0)
		{
			return (0);
		}
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/*#include <stdio.h>
int main() {

    int numero1 = 5;
    int resultado1 = ft_find_next_prime(numero1);
    printf("O próximo primo maior é: %d\n", resultado1);

    return 0;
}*/
