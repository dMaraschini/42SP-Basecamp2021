/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:24:39 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/15 12:43:20 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int number;

	number = nb;
	nb = nb - 1;
	if (number < 0)
		number = 0;
	else if (number == 0)
		number = 1;
	else
		while (nb > 0)
		{
			number = number * nb;
			nb--;
		}
	return (number);
}
