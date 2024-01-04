/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucamba <jlucamba@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:37:50 by jlucamba          #+#    #+#             */
/*   Updated: 2024/01/02 09:10:10 by jlucamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	if (to_find[ii] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + ii] == to_find[ii] && str[i + ii] != '\0')
			ii++;
		if (to_find[ii] == '\0')
		{
			return (str + i);
		}
		ii = 0;
		i++;
	}
	return (0);
}

/*int main()
{
char str[] = "olabomdia";
char to_find[] = "bo";

printf("%s",ft_strstr(str, to_find));
}*/
