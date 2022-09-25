/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:30:56 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/25 20:01:24 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != 0)
		counter++;
	return (counter);
}

int	check_conditions(char *str)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	j = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (str[i] == str[j] && i != j)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	while (str[counter] != '\0')
	{
		if ('+' == str[counter] || '-' == str[counter])
			return (1);
		counter++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_printnbr(int nbr, char *base)
{
	int	resto;
	int	cociente;
	int	len;

	len = ft_strlen(base);
	if (nbr > len - 1)
	{
		cociente = nbr / len;
		ft_printnbr(cociente, base);
		resto = nbr % len;
		ft_putchar(base[resto]);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr < 0 && check_conditions(base) == 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			ft_printnbr((nbr / ft_strlen(base)) * -1, base);
			ft_putchar(base[nbr % ft_strlen(base) * -1]);
		}
		else
		{
			nbr *= -1;
			ft_printnbr(nbr, base);
		}	
	}
	else if (check_conditions(base) == 0)
		ft_printnbr(nbr, base);
}
