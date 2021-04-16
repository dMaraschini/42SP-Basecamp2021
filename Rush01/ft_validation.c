/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 19:05:15 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/11 09:52:46 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_putstr(char *str);
int ft_awnser(int matrix[16]);

//validação da entrada de dados do usuário
//separa a entrada em colup, coldown, rowleft, rowright
// coloquei o retorno int para interromper caso encontremos um erro linha 35
int ft_validation(int input[16])
{
	int i;
	int matrix[16];

	i = 0;
	while (i <= 15)
	{
		if(input[i] < 1 || input[i] > 4 || input[i] == ' ')
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
		matrix[i] = input[i];
	}
	ft_awnser(matrix);
	return (0);
}
