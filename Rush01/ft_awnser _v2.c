/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_awnser _v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:32:56 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/11 16:58:42 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int i;
int row1[4];
int row2[4];
int row3[4];
int row4[4];

int ft_awnser4(int i)
{
	//localiza aonde está o 4 e põe resposta
	if(i <= 3)  //até i =3 temos dados do col up
		{	
			row1[i] = 1;
			row2[i] = 2;
			row3[i] = 3;
			row4[i] = 4;
		}
	if(i >= 4 && i <= 7)  //até 4 <= i <= 7 temos dados do col down
		{	
			row4[i] = 1;
			row3[i] = 2;
			row2[i] = 3;
			row1[i] = 4;
		}
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

int	ft_awnser(int matrix[16])
{
	int res;
	i = 0;
	//analisa numero 4  - se for 4 a sequencia é completa
	while(i < 15)
	{
		res = matrix[i];
		if (res = 4)
			ft_awnser4rowup(i);
		if (res = 1)
			ft_awnser1(i);
		if (res = 3)
			ft_awnser3(i);
		else
			ft_awnser2(i);
		i++;
	}
	printf("O caminho tá sendo trilhado!\n");
	return (0);
}
