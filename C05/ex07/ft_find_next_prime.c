/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:20:17 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/25 18:17:33 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2 ;
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	if (nb > 1)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	flag;

	flag = 1;
	if (nb < 0)
		nb = 2;
	while (flag != 0 && nb < 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			flag = 0;
		else
			nb++;
	}
	return (nb);
}