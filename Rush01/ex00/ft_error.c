/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcara-ca <jcara-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:13:47 by fherrera          #+#    #+#             */
/*   Updated: 2022/07/17 20:02:14 by jcara-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_error(void)
{
	char	*error;
	int		counter;

	error = "Error";
	counter = 0;
	while (error[counter] != '\0')
	{
		ft_putchar(error[counter]);
		counter++;
	}
	ft_putchar('\n');
}
