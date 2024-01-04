/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucamba <jlucamba@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:22:32 by jlucamba          #+#    #+#             */
/*   Updated: 2023/12/27 13:42:23 by jlucamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 1 && str[i] <= 32) && (str[i] != '\0'))
	{
		i++;
	}
	while ((str[i] == '+' || str[i] == '-') && (str[i] != '\0'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*int main(int argc, char **argv)
{
	int mine;

	if(argc == 2)
	{
		mine = ft_atoi(argv[1]);
		printf("%d\n", mine);
	}
	return (0);
}*/
