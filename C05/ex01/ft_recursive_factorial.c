/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:06:53 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/21 18:18:51 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	factorial_recursive(int nb)
{
	if (nb > 1)
		return (nb * factorial_recursive(nb - 1));
	else
		return (1);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return (factorial_recursive(nb));
}
