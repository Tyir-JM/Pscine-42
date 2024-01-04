/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamb    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:19:03 by jlucamba          #+#    #+#             */
/*   Updated: 2023/12/22 11:43:25 by  jlucamba@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122)) 
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char str[] = "ola";
	printf("%s\n", ft_strupcase(str));
	return (0);
}*/
