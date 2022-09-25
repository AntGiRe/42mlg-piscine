/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:12:53 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/11 13:57:13 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr);
void	ft_putchar(char c);
int		cuenta_dieces(int nb);

void	ft_putnbr(int nb)
{
	int	dieces;
	int	numero;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar(2 + 48);
			nb = 147483648;
		}
		else
		nb = nb * -1;
	}
	if (nb == 0)
		ft_putchar('0');
	numero = nb;
	dieces = cuenta_dieces(nb);
	while (dieces != 0)
	{
		ft_putchar(48 + (numero / dieces));
		numero = numero % dieces;
		dieces = dieces / 10;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	cuenta_dieces(int nb)
{
	int	contador;
	int	dieces;

	contador = 0;
	dieces = 1;
	if (nb != 0)
	{
		while (nb > 0)
		{
			nb = nb / 10;
			contador++;
		}
		while (contador != 1)
		{
			dieces = dieces * 10;
			contador--;
		}
	}
	else
		dieces = 0;
	return (dieces);
}
