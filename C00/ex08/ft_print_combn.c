/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:04:36 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/11 15:29:36 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
void ft_print_combn(int n);
int calcula_maximo(int n);
int	cuenta_dieces(int nb);

int	main(void)
{
	ft_print_combn(1);
}

void ft_print_combn(int n)
{
	if(n > 0 || n < 10)
	{
		
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int calcula_maximo(int n)
{
	int numero = cuenta_dieces(n);
	while ()
	{
		
	}
}

int	cuenta_dieces(int nb)
{
	int	contador;
	int	dieces;

	contador = 0;
	dieces = 1;
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
	return (dieces);
}