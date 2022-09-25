/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:55:09 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/18 11:28:45 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	numero;
	int	contador;

	numero = 1;
	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] < 'A' || str[contador] > 'z')
			numero = 0;
		if (str[contador] > 'Z' && str[contador] < 'a')
			numero = 0;
		contador++;
	}
	return (numero);
}
