/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucamba <jlucamba@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 09:47:46 by jlucamba          #+#    #+#             */
/*   Updated: 2023/12/26 12:01:03 by jlucamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else 
	{
		return (s1[i] - s2[i]);
	}
}
/*int main ()
{
int n = 2;

char s1[] = "abcde";
char s2[] = "abcdf";
printf("%i\n", strncmp(s1,s2,n));
printf("%i\n", ft_strncmp(s1,s2,n));
}*/
