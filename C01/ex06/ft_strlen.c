/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamba>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:22:26 by  jlucamba@studen  #+#    #+#             */
/*   Updated: 2023/12/19 11:24:45 by  jlucamba@studen ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		t++;
	}
	return (t);
}

// int	main()
// {
// 	char *c = "Hello";
// 	printf("%i", ft_strlen((c)));
// }
