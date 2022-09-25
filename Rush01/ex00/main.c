/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcara-ca <jcara-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:23:02 by fherrera          #+#    #+#             */
/*   Updated: 2022/07/17 21:24:49 by jcara-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_error(void);
int		check(int ac, char **av);
int		*get_numbers(char *str);
int		check_double(int numbers[4][4], int pos, int num);
int		check_case(int numbers[4][4], int pos, int output[16]);
int		ft_putnbr(int nb);
void	ft_putchar(char c);

int	ft_fill(int numbers[4][4], int output[16], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (check_double(numbers, pos, size) == 0)
		{
			numbers[pos / 4][pos % 4] = size;
			if (check_case(numbers, pos, output) == 0)
			{
				if (ft_fill(numbers, output, pos + 1) == 1)
					return (1);
			}
			else
				numbers[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

void	ft_show_matrix(int numbers[4][4])
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			ft_putnbr(numbers[row][column]);
			if (column < 3)
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	main(int ac, char **av)
{
	int	numbers[4][4];
	int	*output;

	if (check(ac, av) == 1)
	{
		ft_error();
		return (0);
	}
	output = get_numbers(av[1]);
	if (ft_fill(numbers, output, 0) == 1)
		ft_show_matrix(numbers);
	else
		ft_error();
	free (output);
	return (0);
}
