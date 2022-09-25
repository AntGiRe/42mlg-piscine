/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:39:12 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/13 13:08:01 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	numero;
	int	contador;

	numero = 1;
	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] < 'A' || str[contador] > 'Z')
			numero = 0;
		contador++;
	}
	return (numero);
}
