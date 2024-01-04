/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamb    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:27:52 by jlucamba          #+#    #+#             */
/*   Updated: 2023/12/22 11:40:56 by  jlucamba@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int main()
{
	char str[] = "test";
	
	if (ft_str_is_lowercase(str))
	{	
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return (0);
}*/
