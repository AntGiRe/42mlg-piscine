/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:51:18 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/18 11:29:12 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	numero;
	int	contador;

	numero = 1;
	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] < 32 || str[contador] == 127)
			numero = 0;
		contador++;
	}
	return (numero);
}
