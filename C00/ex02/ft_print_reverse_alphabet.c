/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamba>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:47:32 by  jlucamba@studen  #+#    #+#             */
/*   Updated: 2023/12/14 15:21:19 by  jlucamba@studen ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	fts_char;

	fts_char = 'z';
	while (fts_char >= 'a')
	{
		write(1, &fts_char, 1);
		fts_char--;
	}
}
/*int main()
{
	ft_print_reverse_alphabet();
	return 0;
}*/