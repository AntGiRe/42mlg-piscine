/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:00:39 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/26 20:37:43 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_change(char *tablero, int show_bombs, int n);

void	printing_tablero(char *tablero, int show_bombs)
{
	int	i;
	int	j;
	int	counter;

	counter = 0;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 11)
		{
			if (j == 0)
				ft_putchar(i + '0');
			else
			{
				ft_change(tablero, show_bombs, counter);
				counter++;
			}
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	print_tablero(char *tablero, int show_bombs)
{
	printf("  0 1 2 3 4 5 6 7 8 9 x\n");
	printing_tablero(tablero, show_bombs);
	write (1, "y\n", 2);
}

void	ft_endgame(char *tablero)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		tablero[i] = 'o';
		i++;
	}
}

void	fill_tablero(char *tablero)
{
	int	i;
	int	r;
	int	bombas;

	i = 0;
	bombas = 10;
	while (bombas != 0)
	{
		r = rand() % 100;
		tablero[r] = 'x';
		bombas--;
	}
	while (i < 100)
	{
		if (tablero[i] != 'x')
			tablero[i] = 'o';
		i++;
	}
}

int	ft_calcbombs(char *tablero, int n)
{
	int	sum;

	sum = 0;
	if (tablero[n - 1] == 'x')
		sum++;
	if (tablero[n + 1] == 'x')
		sum++;
	if (tablero[n - 10] == 'x')
		sum++;
	if (tablero[n + 10] == 'x')
		sum++;
	if (tablero[n + 11] == 'x')
		sum++;
	if (tablero[n + 9] == 'x')
		sum++;
	if (tablero[n - 11] == 'x')
		sum++;
	if (tablero[n - 9] == 'x')
		sum++;
	return (sum);
}
