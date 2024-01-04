/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucamba <jlucamba@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 14:50:12 by jlucamba          #+#    #+#             */
/*   Updated: 2023/12/26 11:47:13 by jlucamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest_len = 0;
	while (src[dest_len] != '\0' && dest_len < nb)
	{
		dest[i] = src[dest_len];
		i++;
		dest_len++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main ()
{
   char src [] = "bom dia";
   char dest [] = "ola";
   printf("%s", ft_strncat(dest, src, 4));
}*/
