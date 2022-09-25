/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:35:03 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/13 12:36:17 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	numero;
	int	contador;

	numero = 1;
	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] < 'a' || str[contador] > 'z')
			numero = 0;
		contador++;
	}
	return (numero);
}
