/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:42:10 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/08 00:05:38 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int value)
{
	int print_d;
	int print_u;

	print_d = (value / 10) + 48;
	print_u = (value % 10) + 48;
	write(1, &print_d, 1);
	write(1, &print_u, 1);
}

void	ft_print_comb2(void)
{
	int column_1;
	int column_2;

	column_1 = 0;
	while (column_1 <= 99)
	{
		column_2 = column_1 + 1;
		while (column_2 <= 99)
		{
			ft_print_number(column_1);
			ft_print_char(' ');
			ft_print_number(column_2);
			if (column_1 < 98 || column_2 < 99)
			{
				ft_print_char(',');
				ft_print_char(' ');
			}
			column_2++;
		}
		column_1++;
	}
}
