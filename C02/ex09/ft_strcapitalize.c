/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamb    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:34:48 by jlucamba          #+#    #+#             */
/*   Updated: 2023/12/22 11:46:10 by  jlucamba@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	capitalize;
	int	i;

	capitalize = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capitalize)
				str[i] = str[i] - 32; 
			capitalize = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			capitalize = 0;
		}
		else
		{
			capitalize = 1;
		}
		i++;
	}
	return (str);
}
/*int main()
{
    char str[] = "teste 42teste TesTE";
    printf("%s\n", ft_strcapitalize(str));

    return 0;
}*/
