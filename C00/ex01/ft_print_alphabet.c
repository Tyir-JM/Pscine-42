/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucamba@student.42porto.com  <jlucamba>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:53:24 by  jlucamba@s       #+#    #+#             */
/*   Updated: 2023/12/14 14:50:30 by  jlucamba@studen ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	fts_char;

	fts_char = 'a';
	while (fts_char <= 'z')
	{
		write(1, &fts_char, 1);
		fts_char++;
	}
}

/* int main()
{
	ft_print_alphabet();
	return 0;
} */