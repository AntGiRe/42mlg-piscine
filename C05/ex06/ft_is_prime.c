/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:08:55 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/25 14:19:32 by agil-rey         ###   ########.fr       */
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
