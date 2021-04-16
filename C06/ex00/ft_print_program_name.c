/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:14:01 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/16 12:33:00 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int counter;

	counter = 0;
	if (argc > 0)
	{
		while (argv[0][counter] != '\0')
		{
			write(1, &argv[0][counter], 1);
			counter++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
