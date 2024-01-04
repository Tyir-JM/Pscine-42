/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamba>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:40:38 by  jlucamba@studen  #+#    #+#             */
/*   Updated: 2023/12/15 12:47:56 by  jlucamba@studen ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp ;

	temp = *a;
	*a = *b;
	*b = temp;
}