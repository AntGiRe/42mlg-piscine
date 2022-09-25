/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:52:12 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/13 13:55:44 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	end;
	int	contador;
	int	aux;

	end = 0;
	contador = 0;
	while (end != 1)
	{
		end = 1;
		while (contador != (size - 1))
		{
			if (tab[contador] > tab[contador + 1])
			{
				aux = tab[contador + 1];
				tab[contador + 1] = tab[contador];
				tab[contador] = aux;
				end = 0;
			}
			contador++;
		}
		contador = 0;
	}
}
