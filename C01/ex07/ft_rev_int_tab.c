/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:02:32 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/12 12:38:22 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	contador;

	contador = 0;
	while (contador != (size / 2))
	{
		aux = tab[contador];
		tab[contador] = tab[size - contador - 1];
		tab[size - contador - 1] = aux;
		contador++;
	}
}
