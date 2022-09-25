/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:02:48 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/26 20:37:05 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_change(char *tablero, int show_bombs, int n)
{
	if (tablero[n] == 'x' && show_bombs == 0)
		ft_putchar('o');
	else
		ft_putchar(tablero[n]);
}
