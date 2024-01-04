/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamb    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:11:23 by jlucamba          #+#    #+#             */
/*   Updated: 2023/12/22 11:39:38 by  jlucamba@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int main ()
{
char str[] = "1";

	if (ft_str_is_numeric(str))
	{
	printf("1\n");
	}
	else
	{
	printf("0\n");
	}
	return 0;
}*/
