/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucamba <jlucamba@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:28:34 by jlucamba          #+#    #+#             */
/*   Updated: 2024/01/02 19:28:36 by jlucamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	raiz;

	if (nb <= 0)
	{
		return (0);
	}
	raiz = 1;
	if (nb >= 1)
	{
		while (raiz * raiz <= nb)
		{
			if (raiz * raiz == nb)
			{
				return (raiz);
			}
			raiz++;
		}
	}
	return (0);
}
/*#include <stdio.h>
int main() {
    
    int numero1 = 2147483647;
    int resultado1 = ft_sqrt(numero1);
    printf("A raiz quadrada inteira de %d é: %d\n", numero1, resultado1);

    int numero2 = 17; 
    int resultado2 = ft_sqrt(numero2);
    printf("A raiz quadrada inteira de %d é: %d\n", numero2, resultado2);

    int numero3 = -10;
    int resultado3 = ft_sqrt(numero3);
    printf("A raiz quadrada inteira de %d é: %d\n", numero3, resultado3);

    return 0;
}*/
