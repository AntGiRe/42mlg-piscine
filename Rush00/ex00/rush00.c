/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:28:33 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/12 15:01:12 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char caracter);

void	rush(int x, int y)
{
	int	fila;
	int	columna;

	fila = 1;
	while (x > 0 && fila <= y)
	{
		columna = 1;
		while (columna <= x)
		{
			if ((fila == 1 && columna == 1) || (fila == 1 && columna == x))
				ft_putchar('o');
			else if ((fila == y && columna == 1) || (fila == y && columna == x))
				ft_putchar('o');
			else if (fila == 1 || fila == y)
				ft_putchar('-');
			else if (columna == 1 || columna == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			columna++;
		}
		ft_putchar('\n');
		fila++;
	}
}
