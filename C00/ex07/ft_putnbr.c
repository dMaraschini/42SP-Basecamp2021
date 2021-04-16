/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:39:22 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/08 13:53:08 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int nb, int b, int i);
int		is_negative(int nb);
int		number_house(int nb);

void	ft_putnbr(int nb)
{
	int	quantity;
	int	backup_quantity;
	int	potencia;

	if (nb == 2147483647)
	{
		write(1, "2", 1);
		nb = 147483647;
	}
	nb = is_negative(nb);
	quantity = number_house(nb);
	backup_quantity = quantity;
	potencia = 1;
	while (quantity > 0)
	{
		potencia *= 10;
		quantity--;
	}
	print_number(nb, potencia, backup_quantity);
}

int		is_negative(int nb)
{
	int	aux;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			nb = -147483648;
			write(1, "2", 1);
		}
		aux = nb - nb - nb;
		nb = aux;
	}
	return (nb);
}

void	print_number(int nb, int potencia, int quantity)
{
	char c;

	while (quantity > 0)
	{
		c = nb % potencia / (potencia / 10);
		c += 48;
		write(1, &c, 1);
		potencia /= 10;
		quantity--;
	}
}

int		number_house(int nb)
{
	int	quantity;
	int	root_number;
	int	potencia;

	quantity = 1;
	root_number = 0;
	potencia = 10;
	while (root_number != nb)
	{
		potencia *= 10;
		root_number = nb % potencia;
		quantity++;
	}
	return (quantity);
}
