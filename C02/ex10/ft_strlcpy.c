/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:40:29 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/15 11:55:27 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	contador;
	unsigned int	numero;

	contador = 0;
	numero = 0;
	if (size > 1)
	{
		while ((contador != size - 1) && src[contador] != '\0')
		{
			dest[contador] = src[contador];
			contador++;
		}
	}
	dest[contador] = '\0';
	contador = 0;
	while (src[contador] != '\0')
	{
		contador++;
		numero++;
	}
	return (numero);
}
