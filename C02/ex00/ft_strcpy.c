/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamb    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:34:08 by  jlucamba@s       #+#    #+#             */
/*   Updated: 2023/12/22 11:35:59 by  jlucamba@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
 {
 	char dest[] = {"Fail"};
 	char src[] = {"Bom dia"};
	printf("Destino inicial: %s\n", dest);
	printf("Origem: %s\n", src);// teste para ver o que ta no dest
 	printf("Destino depois da troca:%s\n", ft_strcpy(dest, src));// ver se trocou 
 	return 0;
 }*/
