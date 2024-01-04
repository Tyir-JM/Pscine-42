/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucamba <jlucamba@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:57:14 by jlucamba          #+#    #+#             */
/*   Updated: 2023/12/26 13:06:55 by jlucamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main (void)
{
    char src[] = "Hello";
    char dest[] = "Bom dia";
    char fla[] = "hello";
    char sla[] = "bom dia";
   printf("String original: %s\n", src);
    printf("String antes da cópia: %s\n", dest);
    printf("String após a cópia: %s\n",   ft_strcat(dest, src));
	printf("%s\n",strcat(sla, fla));
}*/
