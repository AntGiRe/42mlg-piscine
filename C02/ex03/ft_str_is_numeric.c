/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:27:07 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/13 12:30:25 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	numero;
	int	contador;

	numero = 1;
	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] < '0' || str[contador] > '9')
			numero = 0;
		contador++;
	}
	return (numero);
}
