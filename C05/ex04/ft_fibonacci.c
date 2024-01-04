/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucamba <jlucamba@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:19:55 by jlucamba          #+#    #+#             */
/*   Updated: 2024/01/02 19:19:56 by jlucamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

/*#include <stdio.h>
int main() {

    int indice = 0;
    int resultado = ft_fibonacci(indice);
     printf("%d\n", resultado);

    indice = 3;
    resultado = ft_fibonacci(indice);
     printf("%d\n", resultado);

    indice = 7;
    resultado = ft_fibonacci(indice);
     printf("%d\n", resultado);
    
    indice = -2; 
    resultado = ft_fibonacci(indice);
    printf("%d\n", resultado);

    return 0;
}*/
