/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:43:43 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/16 12:33:20 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int counter;
	int counter2;

	counter = 1;
	if (argc > 1)
	{
		while (counter < argc)
		{
			counter2 = 0;
			while (argv[counter][counter2] != '\0')
			{
				write(1, &argv[counter][counter2], 1);
				counter2++;
			}
			write(1, "\n", 1);
			counter++;
		}
	}
	return (0);
}
