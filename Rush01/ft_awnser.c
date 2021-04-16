/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_awnser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:32:56 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/11 13:28:51 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int i;
int row1[4];
int row2[4];
int row3[4];
int row4[4];

int	ft_awnser(int matrix[16])
{
	i = 0;
	//analisa numero 4  - se for 4 a sequencia é completa
	while(i < 15)
	{
		if(i <= 3 && matrix[i] == 4)  //até i =3 temos dados do col up
		{	
			row1[i] = 1;
			row2[i] = 2;
			row3[i] = 3;
			row4[i] = 4;
		}
		if(i <= 3 && matrix[i] == 1) //coloca valor 4 se encontrou 1
			row1[i] = 4;
		if(i >= 4 && i <= 7 && matrix[i] == 4)  //até 4 <= i <= 7 temos dados do col down
		{	
			row4[i] = 1;
			row3[i] = 2;
			row2[i] = 3;
			row1[i] = 4;
		}
		if(i >= 4 && i <= 7 && matrix[i] == 1)  //coloca valor 4 se encontrou 1
			row4[i] = 4;
		if(i >= 8 && i <= 11 && matrix[i] == 4)  //até 8 <= i <= 11 temos dados do row left
		{
			if(i == 8)
			{
				row1[0] = 1;
				row1[1] = 2;
				row1[2] = 3;
				row1[3] = 4;
			}
			if(i == 9)
			{
				row2[0] = 1;
				row2[1] = 2;
				row2[2] = 3;
				row2[3] = 4;
			}
			if(i == 10)
			{
				row3[0] = 1;
				row3[1] = 2;
				row3[2] = 3;
				row3[3] = 4;
			}
			if(i == 11)
			{
				row4[0] = 1;
				row4[1] = 2;
				row4[2] = 3;
				row4[3] = 4;
			}
		}
		if(i >= 12 && i <= 15 && matrix[i] == 4)  //até 12 <= i <= 15 temos dados do row right
		{
			if(i == 12)
			{
				row1[0] = 4;
				row1[1] = 3;
				row1[2] = 2;
				row1[3] = 1;
			}
			if(i == 13)
			{
				row2[0] = 4;
				row2[1] = 3;
				row2[2] = 2;
				row2[3] = 1;
			}
			if(i == 14)
			{
				row3[0] = 4;
				row3[1] = 3;
				row3[2] = 2;
				row3[3] = 1;
			}
			if(i == 15)
			{
				row4[0] = 4;
				row4[1] = 3;
				row4[2] = 2;
				row4[3] = 1;
			}
		}
	i++;
	}
	printf("O caminho tá sendo trilhado!\n");
	return (0);
}
