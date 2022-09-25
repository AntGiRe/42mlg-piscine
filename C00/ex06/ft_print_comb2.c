/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:52:19 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/11 12:10:32 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);
void	write_comb(int a, int b);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98 || b <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_comb(a, b);
			b++;
		}
		a++;
	}
}

void	write_comb(int a, int b)
{
	ft_putchar(48 + (a / 10));
	ft_putchar(48 + (a % 10));
	ft_putchar(' ');
	ft_putchar(48 + (b / 10));
	ft_putchar(48 + (b % 10));
	if (a != 98 || b != 99)
	{
		write (1, ", ", 2);
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
