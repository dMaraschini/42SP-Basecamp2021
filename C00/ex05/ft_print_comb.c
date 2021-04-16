/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:32:01 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/08 00:04:07 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int hundred;
	int ten;
	int unity;

	hundred = '0';
	while (hundred <= '9')
	{
		ten = hundred + 1;
		while (ten <= '9')
		{
			unity = ten + 1;
			while (unity <= '9')
			{
				write(1, &hundred, 1);
				write(1, &ten, 1);
				write(1, &unity, 1);
				if (unity < '9' || ten < '8' || hundred < '7')
					write(1, ", ", 2);
				unity++;
			}
			ten++;
		}
		hundred++;
	}
}
