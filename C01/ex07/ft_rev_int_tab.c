/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamba>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:50:23 by  jlucamba@studen  #+#    #+#             */
/*   Updated: 2023/12/19 11:22:27 by  jlucamba@studen ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = swap;
		i++;
	}
}
// int  main()
// {
// int i;
// int r;
// int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// int size = 10; 
// ft_rev_int_tab(tab, size);
// while(i < 10){
// printf("%d", tab[i]);
// i++;
// }
// return (0);
// }